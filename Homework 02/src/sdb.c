#include <elf.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <sys/ptrace.h>
#include <capstone/capstone.h>

#define INT3 0xcc
/*
 * Little-Endian-8-byte FORK
 * 6a 39    push   0x39
 * 58       pop    rax
 * 0f 05    syscall
 * 90       nop
 * 90       nop
 * 90       nop
 */
#define FORK 0x909090050f58396a
#define INSN_PEEKSIZE 5

static Elf64_Shdr get_section_hdr64(FILE *file_ptr, Elf64_Ehdr elf_hdr, Elf64_Off n) {
  Elf64_Shdr section_hdr;
  fseeko(file_ptr, elf_hdr.e_shoff + n * elf_hdr.e_shentsize, SEEK_SET);
  fread(&section_hdr, sizeof(section_hdr), 1, file_ptr);
  return section_hdr;
}

static void get_text_section(const char *path, uint8_t **textptr, uint64_t *n, uint64_t *sh_addr) {
  FILE *file_ptr = fopen(path, "rb");

  unsigned char e_ident[EI_NIDENT];
  fread(e_ident, 1, EI_NIDENT, file_ptr);
  if (strncmp((char *) e_ident, "\x7f""ELF", 4) != 0) {
    printf("ELFMAGIC mismatch!\n");
    fclose(file_ptr);
    return;
  }

  if (e_ident[EI_CLASS] == ELFCLASS64) {
    Elf64_Ehdr elf_hdr;
    memcpy(elf_hdr.e_ident, e_ident, EI_NIDENT);
    fread((void *) &elf_hdr + EI_NIDENT, sizeof(elf_hdr) - EI_NIDENT, 1, file_ptr);

    Elf64_Off shstrndx;
    if (elf_hdr.e_shstrndx == SHN_XINDEX) {
      shstrndx = get_section_hdr64(file_ptr, elf_hdr, 0).sh_link;
    } else {
      shstrndx = elf_hdr.e_shstrndx;
    }

    Elf64_Shdr section_hdr_string_tbl_hdr = get_section_hdr64(file_ptr, elf_hdr, shstrndx);
    char *const section_hdr_string_tbl = malloc(section_hdr_string_tbl_hdr.sh_size);
    fseeko(file_ptr, section_hdr_string_tbl_hdr.sh_offset, SEEK_SET);
    fread(section_hdr_string_tbl, 1, section_hdr_string_tbl_hdr.sh_size, file_ptr);

    Elf64_Off shnum;
    if (elf_hdr.e_shnum == SHN_UNDEF) {
      shnum = get_section_hdr64(file_ptr, elf_hdr, 0).sh_size;
    } else {
      shnum = elf_hdr.e_shnum;
    }

    for (Elf64_Off i = 0; i < shnum; i++) {
      Elf64_Shdr section_hdr = get_section_hdr64(file_ptr, elf_hdr, i);
      // we are only interested in .text section
      if (strcmp(".text", section_hdr_string_tbl + section_hdr.sh_name) == 0) {
        *textptr = malloc(section_hdr.sh_size);
        fseeko(file_ptr, section_hdr.sh_offset, SEEK_SET);
        fread(*textptr, 1, section_hdr.sh_size, file_ptr);
        *n = section_hdr.sh_size;
        *sh_addr = section_hdr.sh_addr;
        break;
      }
    }
    free(section_hdr_string_tbl);
  }
  fclose(file_ptr);
}

static void print_disass(csh handle, const uint8_t *code, size_t code_size, uint64_t address) {
  cs_insn *insn;
  size_t count = cs_disasm(handle, code, code_size, address, INSN_PEEKSIZE, &insn);
  for (size_t i = 0; i < count; i++) {
    char bytes[128] = "";
    for (int j = 0; j < insn[i].size; j++) {
      snprintf(&bytes[j * 3], 4, "%2.2x ", insn[i].bytes[j]);
    }
    printf("\t%"PRIx64": %-32s%s\t%s\n", insn[i].address, bytes, insn[i].mnemonic, insn[i].op_str);
  }
  cs_free(insn, count);
  if (count < INSN_PEEKSIZE) {
    printf("** the address is out of the range of the text section.\n");
  }
}

static bool isCmd(char *line) {
  if (strcmp(line, "anchor\n") == 0) {
    return true;
  }
  if (strcmp(line, "timetravel\n") == 0) {
    return true;
  }
  if (strcmp(line, "si\n") == 0) {
    return true;
  }
  if (strcmp(line, "cont\n") == 0) {
    return true;
  }
  return false;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "usage: %s program [args ...]\n", argv[0]);
    return -1;
  }

  pid_t child = fork();
  if (child == 0) { // tracee
    ptrace(PTRACE_TRACEME, 0, 0, 0);
    execvp(argv[1], argv + 1);
    perror("execvp");
    return -1;
  }

  // tracer
  csh handle;
  if (cs_open(CS_ARCH_X86, CS_MODE_64, &handle) != CS_ERR_OK) {
    return -1;
  }

  int child_status;

  waitpid(child, &child_status, 0);
  if (WIFEXITED(child_status)) {
    return -1;
  }

  uint8_t *text = NULL;
  uint64_t text_size = 0;
  uint64_t offset = 0;
  get_text_section(argv[1], &text, &text_size, &offset);

  struct user_regs_struct regs;
  pid_t anchor = 0;
  uint64_t restore_brk_addr = 0;

  ptrace(PTRACE_SETOPTIONS, child, 0, PTRACE_O_TRACEFORK);
  ptrace(PTRACE_GETREGS, child, 0, &regs);
  printf("** program '%s' loaded. entry point %p\n", argv[1], (void *) regs.rip);
  print_disass(handle, &text[regs.rip - offset], text_size - (regs.rip - offset), regs.rip);

  char *line = NULL;
  size_t line_size = 0;
  do {
    printf("(sdb) ");
    getline(&line, &line_size, stdin);

    if (strstr(line, "break ")) {
      uint64_t brk_addr;
      sscanf(line, "break %lx", &brk_addr);
      /* Inject INT3 at breakpoint address */
      long brk = ptrace(PTRACE_PEEKTEXT, child, brk_addr, 0);
      ((uint8_t *) &brk)[0] = INT3;
      ptrace(PTRACE_POKETEXT, child, brk_addr, brk);
      if (anchor) {
        ptrace(PTRACE_POKETEXT, anchor, brk_addr, brk);
      }
      printf("** set a breakpoint at %p\n", (void *) brk_addr);
      continue;
    } else if (!isCmd(line)) {
      continue;
    }

    if (strcmp(line, "anchor\n") == 0) {
      ptrace(PTRACE_GETREGS, child, 0, &regs);
      long peek = ptrace(PTRACE_PEEKTEXT, child, regs.rip, 0);
      /* Inject FORK at rip. */
      ptrace(PTRACE_POKETEXT, child, regs.rip, FORK);

      /* Continue the child until it forked. */
      ptrace(PTRACE_CONT, child, 0, 0);
      waitpid(child, &child_status, 0);

      /* Check if we received a fork event notification. */
      if (child_status >> 8 == (SIGTRAP | (PTRACE_EVENT_FORK << 8))) {
        /* We did receive a fork event notification.  Make sure its PID is reported. */
        ptrace(PTRACE_GETEVENTMSG, child, 0, &anchor);
        waitpid(anchor, NULL, 0);
        ptrace(PTRACE_SETOPTIONS, anchor, 0, PTRACE_O_TRACEFORK);
        printf("** ** dropped an anchor\n");

        /* Remove FORK in child and anchor. */
        ptrace(PTRACE_POKETEXT, child, regs.rip, peek);
        ptrace(PTRACE_SETREGS, child, 0, &regs);
        ptrace(PTRACE_POKETEXT, anchor, regs.rip, peek);
        ptrace(PTRACE_SETREGS, anchor, 0, &regs);
      }
      continue;
    }

    if (strcmp(line, "timetravel\n") == 0) {
      /* Do some cleanup and kill the child. */
      restore_brk_addr = 0;
      kill(child, SIGKILL);
      waitpid(child, NULL, 0);

      /* Set up anchor as new child */
      child = anchor;
      ptrace(PTRACE_GETREGS, child, 0, &regs);
      printf("** go back to the anchor point\n");
      print_disass(handle, &text[regs.rip - offset], text_size - (regs.rip - offset), regs.rip);

      /* Set up a new anchor of the new child */
      long peek = ptrace(PTRACE_PEEKTEXT, child, regs.rip, 0);
      /* Inject FORK at rip. */
      ptrace(PTRACE_POKETEXT, child, regs.rip, FORK);

      /* Continue the child until it forked. */
      ptrace(PTRACE_CONT, child, 0, 0);
      waitpid(child, &child_status, 0);

      /* Check if we received a fork event notification. */
      if (child_status >> 8 == (SIGTRAP | (PTRACE_EVENT_FORK << 8))) {
        /* We did receive a fork event notification.  Make sure its PID is reported. */
        ptrace(PTRACE_GETEVENTMSG, child, 0, &anchor);
        waitpid(anchor, NULL, 0);
        ptrace(PTRACE_SETOPTIONS, anchor, 0, PTRACE_O_TRACEFORK);

        /* Remove FORK in child and anchor. */
        ptrace(PTRACE_POKETEXT, child, regs.rip, peek);
        ptrace(PTRACE_SETREGS, child, 0, &regs);
        ptrace(PTRACE_POKETEXT, anchor, regs.rip, peek);
        ptrace(PTRACE_SETREGS, anchor, 0, &regs);
      }
      continue;
    }

    if (strcmp(line, "si\n") == 0) {
      ptrace(PTRACE_SINGLESTEP, child, 0, 0);
      waitpid(child, &child_status, 0);
    }

    if (strcmp(line, "cont\n") == 0) {
      ptrace(PTRACE_CONT, child, 0, 0);
      waitpid(child, &child_status, 0);
    }

    if (restore_brk_addr) {
      long brk = ptrace(PTRACE_PEEKTEXT, child, restore_brk_addr, 0);
      ((uint8_t *) &brk)[0] = INT3;
      ptrace(PTRACE_POKETEXT, child, restore_brk_addr, brk);
    }

    if (WIFSTOPPED(child_status)) {
      ptrace(PTRACE_GETREGS, child, 0, &regs);

      long peek = ptrace(PTRACE_PEEKTEXT, child, regs.rip - 1, 0);

      /* If the current executed instruction is INT3. (Not because of
       * the restoration of INT3) */
      if (((uint8_t *) &peek)[0] == INT3 && regs.rip - 1 != restore_brk_addr) {
        /* Remove INT3 from child and revert rip to the correct position.
         * Since INT3 takes only one byte, we can revert by doing rip = rip - 1; */
        regs.rip = regs.rip - 1;
        printf("** hit a breakpoint %p.\n", (void *) regs.rip);
        restore_brk_addr = regs.rip;
        ((uint8_t *) &peek)[0] = text[regs.rip - offset];
        ptrace(PTRACE_POKETEXT, child, regs.rip, peek);
        ptrace(PTRACE_SETREGS, child, 0, &regs);

        /* If the current executed instruction isn't INT3, and INT3 is the
         * next instruction. Since step prints the instruction at rip, and
         * breakpoint prints the instruction at rip - 1, we want to avoid
         * printing same instruction twice.*/
      } else if (((uint8_t *) &peek)[1] == INT3) {
        printf("** hit a breakpoint %p.\n", (void *) regs.rip);
        restore_brk_addr = regs.rip;
        ((uint8_t *) &peek)[1] = text[regs.rip - offset];
        ptrace(PTRACE_POKETEXT, child, regs.rip - 1, peek);
      } else {
        /* Reset restore_brk_addr after it has been restored. */
        restore_brk_addr = 0;
      }

      print_disass(handle, &text[regs.rip - offset], text_size - (regs.rip - offset), regs.rip);
    }

  } while (!WIFEXITED(child_status));
  printf("** the target program terminated.\n");

  /* Do some cleanup and kill the anchor. */
  if (anchor && kill(anchor, SIGKILL) == 0) {
    waitpid(anchor, NULL, 0);
  }

  free(line);
  free(text);
  cs_close(&handle);
  return 0;
}
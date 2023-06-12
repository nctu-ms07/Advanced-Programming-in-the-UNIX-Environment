#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <sys/ptrace.h>

#define INT3 0XCC

static char magic[16] = {0};
static int int3_counter = 0;
static int guess = 0;

static void set_magic(int num) {
  for (int i = 9; i >= 0; i--) {
    if (num & 1) {
      magic[i] = '1';
    } else {
      magic[i] = '0';
    }
    num >>= 1;
  }
  magic[10] = '\0';
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
  int child_status;
  struct user_regs_struct regs;

  uint64_t magic_addr;
  struct user_regs_struct oracle_reset_regs;

  waitpid(child, &child_status, 0);
  if (WIFEXITED(child_status)) {
    printf("** the target program terminated.\n");
    return -1;
  }

  do {
    ptrace(PTRACE_CONT, child, 0, 0);
    waitpid(child, &child_status, 0);

    if (WIFSTOPPED(child_status)) {
      ptrace(PTRACE_GETREGS, child, 0, &regs);
      long peek = ptrace(PTRACE_PEEKTEXT, child, regs.rip - 1, 0);
      if (((uint8_t *) &peek)[0] == INT3) {
        int3_counter = int3_counter + 1;
      }

      if (int3_counter == 2) { // after memset(magic, '0', sizeof(magic)-1);
        magic_addr = regs.rax;
      }

      if (int3_counter == 3) { // after oracle_connect();
        ptrace(PTRACE_GETREGS, child, 0, &oracle_reset_regs);
      }

      if (int3_counter == 4) { // after oracle_reset();
        peek = ptrace(PTRACE_PEEKTEXT, child, magic_addr, 0);
        memcpy(magic, &peek, sizeof(peek));
        peek = ptrace(PTRACE_PEEKTEXT, child, magic_addr + 8, 0);
        memcpy(magic + 8, &peek, sizeof(peek));

        set_magic(guess++);
        ptrace(PTRACE_POKETEXT, child, magic_addr, *((long *) magic));
        ptrace(PTRACE_POKETEXT, child, magic_addr + 8, *((long *) (magic + 8)));
      }

      if (int3_counter == 5) { // after oracle_get_flag();
        if ((uint32_t) regs.rax != 0) { // oracle_get_flag failed
          ptrace(PTRACE_SETREGS, child, 0, &oracle_reset_regs); // jump back to point after oracle_connect()
          int3_counter = 3;
        }

      }
    }

  } while (!WIFEXITED(child_status));
  printf("** the target program terminated.\n");
  return 0;
}
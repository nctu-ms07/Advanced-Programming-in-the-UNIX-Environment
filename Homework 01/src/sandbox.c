#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <link.h>
#include <sys/mman.h>
#include <limits.h>
#include <stdarg.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>

static Elf64_Shdr get_section_hdr64(FILE *file_ptr, Elf64_Ehdr elf_hdr, Elf64_Off n) {
  Elf64_Shdr section_hdr;
  fseeko(file_ptr, elf_hdr.e_shoff + n * elf_hdr.e_shentsize, SEEK_SET);
  fread(&section_hdr, sizeof(section_hdr), 1, file_ptr);
  return section_hdr;
}

static char *populate_got(const char *path) {
  FILE *file_ptr = fopen(path, "rb");

  unsigned char e_ident[EI_NIDENT];
  fread(e_ident, 1, EI_NIDENT, file_ptr);
  if (strncmp((char *) e_ident, "\x7f""ELF", 4) != 0) {
    printf("ELFMAGIC mismatch!\n");
    fclose(file_ptr);
    exit(0);
  }

  char *stream_buf = NULL;
  size_t size;
  FILE *mem_stream = open_memstream(&stream_buf, &size);

  if (e_ident[EI_CLASS] == ELFCLASS64) {
    Elf64_Ehdr elf_hdr;
    memcpy(elf_hdr.e_ident, e_ident, EI_NIDENT);
    fread((void *) &elf_hdr + EI_NIDENT, sizeof(elf_hdr) - EI_NIDENT, 1, file_ptr);

    Elf64_Off shnum;
    if (elf_hdr.e_shnum == SHN_UNDEF) {
      shnum = get_section_hdr64(file_ptr, elf_hdr, 0).sh_size;
    } else {
      shnum = elf_hdr.e_shnum;
    }

    for (Elf64_Off i = 0; i < shnum; i++) {
      Elf64_Shdr section_hdr = get_section_hdr64(file_ptr, elf_hdr, i);

      // only get relocations which link to another section (for symbols)
      if (section_hdr.sh_link == SHN_UNDEF) {
        continue;
      }

      // we are only interested in relocations
      if (section_hdr.sh_type != SHT_REL && section_hdr.sh_type != SHT_RELA) {
        continue;
      }

      void *const entries = malloc(section_hdr.sh_size);
      Elf64_Xword entnum = section_hdr.sh_size / section_hdr.sh_entsize;
      fseeko(file_ptr, section_hdr.sh_offset, SEEK_SET);
      fread(entries, section_hdr.sh_entsize, entnum, file_ptr);

      Elf64_Shdr symbol_tbl_hdr = get_section_hdr64(file_ptr, elf_hdr, section_hdr.sh_link);
      Elf64_Sym *const symbol_tbl = malloc(symbol_tbl_hdr.sh_size);
      fseeko(file_ptr, symbol_tbl_hdr.sh_offset, SEEK_SET);
      fread(symbol_tbl, symbol_tbl_hdr.sh_entsize, symbol_tbl_hdr.sh_size / symbol_tbl_hdr.sh_entsize, file_ptr);

      Elf64_Shdr string_tbl_hdr = get_section_hdr64(file_ptr, elf_hdr, symbol_tbl_hdr.sh_link);
      char *const string_tbl = malloc(string_tbl_hdr.sh_size);
      fseeko(file_ptr, string_tbl_hdr.sh_offset, SEEK_SET);
      fread(string_tbl, 1, string_tbl_hdr.sh_size, file_ptr);

      for (Elf64_Xword j = 0; j < entnum; j++) {
        Elf64_Addr r_offset;
        Elf64_Xword r_info_sym;
        if (section_hdr.sh_type == SHT_REL) {
          r_offset = ((Elf64_Rel *) entries)[j].r_offset;
          r_info_sym = ELF64_R_SYM(((Elf64_Rel *) entries)[j].r_info);
        }

        if (section_hdr.sh_type == SHT_RELA) {
          r_offset = ((Elf64_Rela *) entries)[j].r_offset;
          r_info_sym = ELF64_R_SYM(((Elf64_Rela *) entries)[j].r_info);
        }

        if (strlen(string_tbl + symbol_tbl[r_info_sym].st_name) != 0) {
          fprintf(mem_stream, "%s %p\n", string_tbl + symbol_tbl[r_info_sym].st_name, (void *) r_offset);
        }
      }

      free(entries);
      free(symbol_tbl);
      free(string_tbl);
    }
  }

  fclose(file_ptr);
  fclose(mem_stream);

  return stream_buf;
}

char *open_blacklist = NULL;
char *read_filter = NULL;
char *connect_blacklist = NULL;
char *getaddrinfo_blacklist = NULL;

void load_config() {
  FILE *file = fopen(getenv("SANDBOX_CONFIG"), "r");
  if (file) {
    char *line = NULL;
    size_t len = 0;
    while (getline(&line, &len, file) != -1) {

      if (strcmp(line, "BEGIN open-blacklist\n") == 0) {
        size_t size;
        FILE *mem_stream = open_memstream(&open_blacklist, &size);
        getline(&line, &len, file);
        while (strcmp(line, "END open-blacklist\n") != 0) {
          fprintf(mem_stream, "%s", line);
          getline(&line, &len, file);
        }
        fclose(mem_stream);
      }

      if (strcmp(line, "BEGIN read-blacklist\n") == 0) {
        getline(&line, &len, file);
        line[strlen(line) - 1] = '\0'; // remove '\n' in line
        read_filter = strdup(line);
        getline(&line, &len, file); //END read-blacklist\n
      }

      if (strcmp(line, "BEGIN connect-blacklist\n") == 0) {
        size_t size;
        FILE *mem_stream = open_memstream(&connect_blacklist, &size);
        getline(&line, &len, file);
        while (strcmp(line, "END connect-blacklist\n") != 0) {
          char *save_ptr = NULL;
          char *hostname = strtok_r(line, ":", &save_ptr);
          char *service = strtok_r(NULL, "\n", &save_ptr);

          struct addrinfo *result;
          getaddrinfo(hostname, service, NULL, &result);
          for (struct addrinfo *info = result; info != NULL; info = info->ai_next) {
            if (info->ai_family == AF_INET) {
              fprintf(mem_stream, "%s\n", inet_ntoa(((struct sockaddr_in *) info->ai_addr)->sin_addr));
            }
          }
          freeaddrinfo(result);

          getline(&line, &len, file);
        }
        fclose(mem_stream);
      }

      if (strcmp(line, "BEGIN getaddrinfo-blacklist\n") == 0) {
        size_t size;
        FILE *mem_stream = open_memstream(&getaddrinfo_blacklist, &size);
        getline(&line, &len, file);
        while (strstr(line, "END getaddrinfo-blacklist") == NULL) { // might not end with '\n'
          fprintf(mem_stream, "%s", line);
          getline(&line, &len, file);
        }
        fclose(mem_stream);
      }
    }
    free(line);
  }
  fclose(file);
}

int LOGGER_FD;

int sandbox_open(const char *pathname, int flags, ...) {
  mode_t mode = 0;
  if (__OPEN_NEEDS_MODE(flags)) {
    va_list args;
    va_start(args, flags);
    mode = va_arg(args, mode_t);
    va_end(args);
  }

  char *realpathname = realpath(pathname, NULL);

  FILE *mem_stream = fmemopen(open_blacklist, strlen(open_blacklist), "r");
  char *line = NULL;
  size_t len = 0;
  while (getline(&line, &len, mem_stream) != -1) {
    line[strlen(line) - 1] = '\0'; // remove '\n' in line
    if (strcmp(line, pathname) == 0 || (realpathname && strcmp(line, realpathname) == 0)) {
      free(realpathname);
      free(line);
      fclose(mem_stream);
      errno = EACCES;
      dprintf(LOGGER_FD, "[logger] open(\"%s\", %d, %d) = -1\n", pathname, flags, mode);
      return -1;
    }
  }
  free(realpathname);
  free(line);
  fclose(mem_stream);

  int return_value = open(pathname, flags, mode);
  dprintf(LOGGER_FD, "[logger] open(\"%s\", %d, %d) = %d\n", pathname, flags, mode, return_value);
  return return_value;
}

ssize_t sandbox_read(int fd, void *buf, size_t count) {
  ssize_t return_value = read(fd, buf, count);

  if (return_value > 0) {
    size_t len = snprintf(NULL, 0, "./%d-%d-read.log", getpid(), fd);
    char *log_name = malloc(len + 1);
    sprintf(log_name, "./%d-%d-read.log", getpid(), fd);
    int log_file = open(log_name, O_CREAT | O_RDWR | O_APPEND | O_SYNC, 0664);
    free(log_name);

    size_t content_size;
    size_t log_size = lseek(log_file, 0, SEEK_END);
    if (log_size >= (strlen(read_filter) - 1)) {
      content_size = (strlen(read_filter) - 1);
      lseek(log_file, -(strlen(read_filter) - 1), SEEK_END);
    } else {
      content_size = log_size;
      lseek(log_file, 0, SEEK_SET);
    }
    void *content = malloc(content_size + return_value);
    read(log_file, content, content_size);
    memcpy(content + content_size, buf, return_value);

    if (memmem(content, content_size + return_value, read_filter, strlen(read_filter))) {
      close(log_file);
      close(fd);
      errno = EIO;
      dprintf(LOGGER_FD, "[logger] read(%d, %p, %lu) = -1\n", fd, buf, count);
      return -1;
    }
    write(log_file, buf, return_value);
    close(log_file);
  }

  dprintf(LOGGER_FD, "[logger] read(%d, %p, %lu) = %ld\n", fd, buf, count, return_value);
  return return_value;
}

ssize_t sandbox_write(int fd, const void *buf, size_t count) {
  ssize_t return_value = write(fd, buf, count);
  dprintf(LOGGER_FD, "[logger] write(%d, %p, %lu) = %ld\n", fd, buf, count, return_value);

  size_t len = snprintf(NULL, 0, "./%d-%d-write.log", getpid(), fd);
  char *log_name = malloc(len + 1);
  sprintf(log_name, "./%d-%d-write.log", getpid(), fd);
  int log_file = open(log_name, O_CREAT | O_WRONLY | O_APPEND | O_SYNC, 0664);
  free(log_name);
  write(log_file, buf, return_value);
  close(log_file);
  return return_value;
}

int sandbox_connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen) {
  char *ip = inet_ntoa(((struct sockaddr_in *) addr)->sin_addr);

  FILE *mem_stream = fmemopen(connect_blacklist, strlen(connect_blacklist), "r");
  char *line = NULL;
  size_t len = 0;
  while (getline(&line, &len, mem_stream) != -1) {
    line[strlen(line) - 1] = '\0'; // remove '\n' in line
    if (strcmp(line, ip) == 0) {
      free(line);
      fclose(mem_stream);
      errno = ECONNREFUSED;
      dprintf(LOGGER_FD, "[logger] connect(%d, \"%s\", %u) = -1\n", sockfd, ip, addrlen);
      return -1;
    }
  }
  free(line);
  fclose(mem_stream);

  int return_value = connect(sockfd, addr, addrlen);
  dprintf(LOGGER_FD, "[logger] connect(%d, \"%s\", %u) = %d\n", sockfd, ip, addrlen, return_value);
  return return_value;
}

int sandbox_getaddrinfo(const char *restrict node,
                        const char *restrict service,
                        const struct addrinfo *restrict hints,
                        struct addrinfo **restrict res) {
  FILE *mem_stream = fmemopen(getaddrinfo_blacklist, strlen(getaddrinfo_blacklist), "r");
  char *line = NULL;
  size_t len = 0;
  while (getline(&line, &len, mem_stream) != -1) {
    line[strlen(line) - 1] = '\0'; // remove '\n' in line
    if (strcmp(line, node) == 0) {
      free(line);
      fclose(mem_stream);
      dprintf(LOGGER_FD, "[logger] getaddrinfo(\"%s\", \"%s\", %p, %p) = %d\n", node, service, hints, res, EAI_NONAME);
      return EAI_NONAME;
    }
  }
  free(line);
  fclose(mem_stream);

  int return_value = getaddrinfo(node, service, hints, res);
  dprintf(LOGGER_FD, "[logger] getaddrinfo(\"%s\", \"%s\", %p, %p) = %d\n", node, service, hints, res, return_value);
  return return_value;
}

int sandbox_system(const char *command) {
  dprintf(LOGGER_FD, "[logger] system(\"%s\")\n", command);
  return system(command);
}

char *elf_path = NULL;
char *got_tbl = NULL;
unsigned long base_addr = ULONG_MAX;

void hijack(const char *func_name, void *func_addr) {
  FILE *mem_stream = fmemopen(got_tbl, strlen(got_tbl), "r");
  char *line = NULL;
  size_t len = 0;
  while (getline(&line, &len, mem_stream) != -1) {
    char *save_ptr = NULL;
    char *symbol = strtok_r(line, " ", &save_ptr);
    unsigned long got_offset = strtoul(strtok_r(NULL, "\n", &save_ptr), NULL, 16);

    if (got_offset < base_addr) {
      got_offset += base_addr;
    }

    if (strcmp(symbol, func_name) == 0) {
      memcpy((void *) (got_offset), &func_addr, sizeof(func_addr));
      break;
    }

  }
  free(line);
  fclose(mem_stream);
}

void __attribute__((constructor)) init(void) {
  load_config();
  LOGGER_FD = strtol(getenv("LOGGER_FD"), NULL, 10);

  elf_path = realpath("/proc/self/exe", NULL);

  FILE *file = fopen("/proc/self/maps", "r");
  char *line = NULL;
  size_t len = 0;
  while (getline(&line, &len, file) != -1) {
    if (strstr(line, elf_path)) {
      unsigned long min, max;
      sscanf(line, "%lx-%lx", &min, &max);
      mprotect((void *) min, max - min, PROT_READ | PROT_WRITE | PROT_EXEC);
      base_addr = (min < base_addr ? min : base_addr);
    }
  }
  free(line);
  fclose(file);

  got_tbl = populate_got(elf_path);
  hijack("open", sandbox_open);
  hijack("read", sandbox_read);
  hijack("write", sandbox_write);
  hijack("connect", sandbox_connect);
  hijack("getaddrinfo", sandbox_getaddrinfo);
  hijack("system", sandbox_system);
}

void __attribute__((destructor)) fini(void) {
  free(elf_path);
  free(got_tbl);
  free(open_blacklist);
  free(read_filter);
  free(connect_blacklist);
  free(getaddrinfo_blacklist);
}

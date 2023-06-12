#include <link.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <limits.h>
#include "shuffle.h"
#include "got_offset.h"

void *handle;
unsigned long base_addr = ULONG_MAX;

void modify_got_table(int id) {
  if (got_offset[ndat[id]] == 0) {
    return;
  }

  size_t len = snprintf(NULL, 0, "%d", id);
  char *correct_func_name = malloc(len + 6);
  sprintf(correct_func_name, "code_%d", id);
  void *correct_func = dlsym(handle, correct_func_name);
  free(correct_func_name);

  memcpy((void *) (base_addr + got_offset[ndat[id]]), &correct_func, sizeof(correct_func));
}

void init(void) {
  FILE *file = fopen("/proc/self/maps", "r");
  char *line = NULL;
  size_t len = 0;
  while (getline(&line, &len, file) != -1) {
    if (strstr(line, "/chals")) {
      unsigned long min, max;
      char flags[5];
      sscanf(line, "%lx-%lx %4s", &min, &max, flags);
      if (strcmp(flags, "r-xp") != 0) {
        mprotect((void *) min, max - min, PROT_READ | PROT_WRITE | PROT_EXEC);
      }
      base_addr = (min < base_addr ? min : base_addr);
    }
  }
  free(line);
  fclose(file);

  handle = dlopen(NULL, RTLD_LAZY);
  for (int i = 0; i < 1477; i++) {
    modify_got_table(i);
  }
}

void __attribute__((destructor)) fini(void) {
  dlclose(handle);
}

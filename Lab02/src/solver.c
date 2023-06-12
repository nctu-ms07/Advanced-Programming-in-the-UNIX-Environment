#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int filter(const struct dirent *entry) {
  return strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0;
}

void find(const char *path, const char *target) {
  struct dirent **namelist;
  int n = scandir(path, &namelist, filter, alphasort);

  while (n--) {
    char *const filepath = malloc(strlen(path) + strlen(namelist[n]->d_name) + 2);
    sprintf(filepath, "%s/%s", path, namelist[n]->d_name);

    if (namelist[n]->d_type == DT_DIR) {
      find(filepath, target);
    }

    if (namelist[n]->d_type == DT_REG) {
      char read_buf[strlen(target) + 1];
      FILE *file = fopen(filepath, "r");
      fgets(read_buf, (int) sizeof(read_buf), file);
      if (strcmp(target, read_buf) == 0) {
        fprintf(stdout, "%s\n", filepath);
      }
      fclose(file);
    }

    free(filepath);
    free(namelist[n]);
  }
  free(namelist);
}

int main(__attribute__((unused)) int argc, char *argv[]) {
  find(argv[1], argv[2]);
  exit(EXIT_SUCCESS);
}
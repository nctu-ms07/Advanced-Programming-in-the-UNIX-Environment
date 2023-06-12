#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <seccomp.h>
#include <sys/mman.h>

#define errquit(m)    { perror(m); _exit(-1); }

typedef void (*sort_ptr_t)(long *numbers, int n);

void sandbox() {
  scmp_filter_ctx ctx;
  if (getenv("NO_SANDBOX") != NULL) return;
  if ((ctx = seccomp_init(SCMP_ACT_KILL)) == NULL) errquit("seccomp_init");
  if (seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(write), 0) < 0) errquit("seccomp_rule_add");
  if (seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(brk), 0) < 0) errquit("seccomp_rule_add");
  if (seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(getrandom), 0) < 0) errquit("seccomp_rule_add");
  if (seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(newfstatat), 0) < 0) errquit("seccomp_rule_add");
  if (seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit), 0) < 0) errquit("seccomp_rule_add");
  if (seccomp_rule_add(ctx, SCMP_ACT_ALLOW, SCMP_SYS(exit_group), 0) < 0) errquit("seccomp_rule_add");
  if (seccomp_load(ctx) < 0) errquit("seccomp_load");
  seccomp_release(ctx);
}

void radix_sort(uint64_t *restrict numbers) {
  // Assume n is already known
  int n = 524288;
  // Flip signed bit of int64 and treat it as uint64
  // Positive is now larger than negative in uint64
  for (int i = 0; i < n; i++) {
    numbers[i] ^= ((uint64_t) 1 << 63);
  }

  // Do counting sort for every digit
  uint8_t base_shift = 16;
  uint64_t *restrict output = alloca(sizeof(uint64_t) * n);
  int *restrict bucket = alloca(sizeof(int) << base_shift);

  for (uint8_t shift = 0; shift < 64; shift += base_shift) {
    for (int i = 0; i < (1 << base_shift); i++) {
      bucket[i] = 0;
    }

    // Pushing elements in their corresponding buckets
    for (int i = 0; i < n; i++) {
      bucket[(numbers[i] >> shift) & ((1 << base_shift) - 1)]++;
    }

    // Bucket[i] points at the index of digit i we are putting into output
    for (int i = 1; i < (1 << base_shift); i++) {
      bucket[i] += bucket[i - 1];
    }

    // Merging buckets into output
    for (int i = n - 1; i >= 0; i--) {
      output[bucket[(numbers[i] >> shift) & ((1 << base_shift) - 1)] - 1] = numbers[i];
      bucket[(numbers[i] >> shift) & ((1 << base_shift) - 1)]--;
    }

    for (int i = 0; i < n; i++) {
      numbers[i] = output[i];
    }
  }

  // Flip signed bit back
  for (int i = 0; i < n; i++) {
    numbers[i] ^= ((uint64_t) 1 << 63);
  }
}

int check_numbers(long *numbers, long *sorted, int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (numbers[i] != sorted[i]) {
      printf("** check failed.\n");
      break;
    }
  }
  if (i == n) {
    printf("** check passed. Good Job!\n");
  }
  return i;
}

int main() {
  char buf[64];
  int bytes;
  sort_ptr_t sort;

  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  long *numbers;
  if ((numbers = mmap(NULL, 524288 * sizeof(long),
                      PROT_READ | PROT_WRITE | PROT_EXEC,
                      MAP_PRIVATE | MAP_ANON, -1, 0)) == MAP_FAILED) errquit("mmap");
  long *sorted;
  if ((sorted = mmap(NULL, 524288 * sizeof(long),
                     PROT_READ | PROT_WRITE | PROT_EXEC,
                     MAP_PRIVATE | MAP_ANON, -1, 0)) == MAP_FAILED) errquit("mmap");
  for (int i = 0; i < 524288; i++) {
    numbers[i] = random();
    sorted[i] = numbers[i];
  }
  radix_sort((uint64_t *) sorted);
  printf("** 524288 number(s) generated.\n");

  printf("How many bytes do you want to send? ");
  if (fgets(buf, sizeof(buf), stdin) == NULL) errquit("read");
  if (sscanf(buf, "%d", &bytes) != 1) errquit("sscanf");

  if (bytes > 0) {
    if ((sort = mmap(NULL, (1 + bytes / 4096) * 4096,
                     PROT_READ | PROT_WRITE | PROT_EXEC,
                     MAP_PRIVATE | MAP_ANON, -1, 0)) == MAP_FAILED) errquit("mmap");

    printf("Send me your code: ");
    int e, nread = 0;
    while (nread != bytes) {
      if ((e = read(0, sort + nread, bytes)) < 0) errquit("read");
      nread += e;
    }
    printf("** code: %d byte(s) received.\n", nread);

    sandbox();
    printf("** start running the sort function ...\n");
    sort(numbers, 524288);
    int correct = check_numbers(numbers, sorted, 524288);
    printf("** sorted percentage = %.3f (%d/%d)\n", correct / (float) 524288, correct, 524288);
  }

  return 0;
}

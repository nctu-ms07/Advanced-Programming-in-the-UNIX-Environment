#include <stdint.h>
#include <alloca.h>

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

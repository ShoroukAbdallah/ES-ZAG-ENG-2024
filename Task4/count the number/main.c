#include <stdio.h>
#include <stdlib.h>

unsigned int countBits(unsigned int n) {
  unsigned int count = 0;
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

int main() {
  unsigned int n;

  printf("Enter an unsigned 32-bit integer: ");
  scanf("%u", &n);

  unsigned int count = countBits(n);
  printf("Number of 1's: %u\n", count);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main() {
  int num, count = 0;
  unsigned int mask = 1;

  printf("Enter a number ");
  scanf("%d", &num);


  while ((num & mask) == 0) {
    mask <<= 1;
    count++;
  }

  for (int i = count - 1; i >= 0; i--) {
    if ((num & mask) != 0) {
      printf("1");
    } else {
      printf("0");
    }
    mask >>= 1;
  }

  printf("\n");

  return 0;
}

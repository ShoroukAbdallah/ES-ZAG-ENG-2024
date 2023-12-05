#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, Numreverse = 0, inder;
  printf("Enter the number to reverse ");
  scanf("%d", &num);

  while (num != 0) {
    inder = num % 10;
    Numreverse = Numreverse * 10 + inder;
    num /= 10;
  }
  printf("number reverse %d\n", Numreverse);

  return 0;
}

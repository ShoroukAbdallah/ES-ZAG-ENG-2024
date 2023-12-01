#include <stdio.h>
#include <stdlib.h>

int main() {
  int number, factorial =1;

  printf("Enter a number");
  scanf("%d", &number);

  while (number > 0) {
    factorial *= number;
    number--;
  }

  printf("%d!=%d\n", number, factorial);

  return 0;
}

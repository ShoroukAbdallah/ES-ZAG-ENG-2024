#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;

  printf("Enter first number");
  scanf("%d", &a);

  printf("Enter last number ");
  scanf("%d", &b);

  for (int i = a; i <= b; i++) {
    printf("%d\n", i);
  }

  return 0;
}

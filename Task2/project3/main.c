#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
  int a, b, c, d, x;

  printf("Enter the numbers ");
  scanf("%d%d%d%d", &a,&b,&c,&d);

  x = a * b - c * d;

  printf("The result=%d", x);

  return 0;
}

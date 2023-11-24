#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c, min, max;
  printf("Enter the three numbers ");
  scanf("%d%d%d", &a,&b,&c);


  if (a <= b && a <= c) {
    min = a;
  } else if (b <= a && b <= c) {
    min = b;
  } else {
    min = c;
  }

  if (a >= b && a >= c) {
    max = a;
  } else if (b >= a && b >= c) {
    max = b;
  } else {
    max = c;
  }

  printf("The minimum number is: %d\n", min);
  printf("The maximum number is: %d\n", max);

  return 0;
}

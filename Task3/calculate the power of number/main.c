#include <stdio.h>
#include <stdlib.h>

int main() {
  int number, power;
  long long int result = 1;

  printf("Enter the number");
  scanf("%d", &number);

  printf("Enter the power");
  scanf("%d", &power);

  for (int i = 0; i < power; i++) {
    result = result * number;
  }

  printf("%d raised to the power %d is %6d", number, power, result);

  return 0;
}

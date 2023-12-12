#include <stdio.h>
#include <stdlib.h>

int main() {
  int numbers[10];

  printf("Enter numbers ");
  for (int i = 0; i <10 ; i++) {
   scanf("%d", &numbers[i]);
  }
    int min,max;
    min =max= numbers[0];
  for (int i = 1; i <10 ; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    } else if (numbers[i] > max) {
      max = numbers[i];
    }
  }

  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numbers[5];

  printf("Enter The 5 numbers");
  for(int i=0 ; i<5 ; i++) {
    scanf("%d", &numbers[i]);
  }
  for(int j=0; j<5 ; j++) {
    if (numbers[j]%3 == 0) {
      printf("%d ", numbers[j]);
    }
  }
  return 0;
}

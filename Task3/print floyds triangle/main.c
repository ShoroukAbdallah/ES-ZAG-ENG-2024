#include <stdio.h>
#include <stdlib.h>

int main() {
  int x , y =1;
  printf("Enter the number of rows");
  scanf("%d", &x);
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < i; j++) {
      printf("%d ", y);
      y++;
    }
    printf("\n");
  }
  return 0;
}

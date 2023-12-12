#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int sum=0;

  printf("Enter the size of the array ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the integers ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("The sum of the numbers is %d\n", sum);

  return 0;
}

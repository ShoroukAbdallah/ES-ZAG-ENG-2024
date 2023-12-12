#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter the size of the array ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  reverse_array(arr, n);

  printf("Reversed array ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
void reverse_array(int arr[], int n) {
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
}

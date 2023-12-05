#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  char ch;
   printf("Enter a character ");
   scanf("%c", &ch);
   printf("Enter a number ");
   scanf("%d", &num);

  if (num % 2 == 0) {
    printf("the character %c\n", ch);
  } else {
    if (ch >= 'a' && ch <= 'z') {
      printf("the character %c\n", ch - 32);
    } else if (ch >= 'A' && ch <= 'Z') {
      printf("the character %c\n", ch + 32);
    } else {
      printf("Invalid character %c\n", ch);
    }
  }

  return 0;
}

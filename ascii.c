#include<stdio.h>
int main()
{
  char ch;
  printf("Enter number: ");
  scanf("%c", &ch);

  printf("number in decimal: %d\n", ch);
  printf("number in Hex: %X\n", ch);
  printf("number in Octal: %o\n", ch);
  printf("character in ASCII value: %c\n", ch);

}

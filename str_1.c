//Program to print characters of a string and address of each.

#include <stdio.h>

int main()
{
  char str[] = "India";
  int i;
  for(i = 0; str[i] != '\0'; i++)
  {
    printf("Character = %c\t", str[i]);
    printf("Address = %u\n", &str[i]);
  }
}
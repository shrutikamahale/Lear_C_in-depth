//program to represent character of a string and address of exach character.
#include<stdio.h>
int main()
{
  char str[] = "india";
  int i = 0;
  for(i = 0; str[i] != '\0'; i++)
  {
    printf("character = %c\t",str[i]);
    printf("Address = %u\n",&str[i]);
  }
}
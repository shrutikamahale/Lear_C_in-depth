#include<stdio.h>
#include<string.h>
int main()
{
  char str[10];
  int i = 0;

  printf("Enter sting: ");
  scanf("%s", str);

  while(str[i] != '\0')
  {
    str[i] = str[i] - 32;
    i++;
  }
  printf("The uppercase string is: %s\n",   str);
}
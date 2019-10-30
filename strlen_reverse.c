//program a program to enter any string and print it in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
  char str[10];
  int len;

  printf("Enter sting: ");
  scanf("%s", str);
  len = strlen(str) - 1;
  while(len >= 0 )
  {
    printf("%c",str[len]);
    len--;
  }
  printf("\n");

}
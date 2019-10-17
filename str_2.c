//program to understand strlen function.
#include<stdio.h>
int astrlen(char str[]);
int pstrlen(char *str);
int main()
{
  char str[20];
  int length;
  printf("Enter string: ");
  scanf("%s",str);
  length = strlen(str);
  printf("length of string is: %d",length);

}
int astrlen(char str[])
{
  int i = 0;
  while(str[i] != '\0')
  i++;
  return i;
}
int pstrlen(char *str)
{
  char *start = str;
  while(*str != '\0')
    str++;
  return(str-start);

}
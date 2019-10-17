//program to understand work of strcmp.
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[10], str2[10];
  printf("Enter 1st string: ");
  scanf("%s",str1);
  printf("Enter 2nd string: ");
  scanf("%s",str2);
  if((strcmp(str1,str2)==0))
    printf("string are same.\n");
  else
    printf("String are not same.\n");
}
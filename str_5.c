//program to understand strcpy function.

#include <stdio.h>
#include <string.h>

int main() 
{
  char str1[10], str2[10];
  printf("Enter the first string: ");
  scanf("%s", str1);
  printf("Enter the second string: ");
  scanf("%s", str2);

  strcpy(str1,str2);

  printf("First String: %s \t\t Second String: %s \n",str1,str2);

  strcpy(str1,"Delhi");
  
  strcpy(str2,"calcutta");

  printf("First String: %s \t\t Second String: %s \n",str1,str2);
  
  
}
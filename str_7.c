//program to understand dynamic memory allocation.

#include <stdio.h>
#include <string.h>
int main() 
{
  char *str;
  //str = (char *)malloc(10);
  printf("Enter the string: ");
  scanf("%s",str);
  printf("Entered string is: %s",str);

}
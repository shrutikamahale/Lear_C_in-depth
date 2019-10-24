//program to understand work of strcmp function


#include <stdio.h>
#include <string.h>

int main() 
{
  char str1[10],str2[10];
  printf("Enter the First String: ");
  scanf("%s", str1); 
  printf("Enter the Second String: ");
  scanf("%s", str2);
  if((strcmp(str1, str2))==0) 
    printf("String are same.");
  else
    printf("String are not same.");
  
  //printf("Hello World\n");
  return 0;
}
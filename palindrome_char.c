#include<stdio.h>
#include<string.h>
int main()
{
  char str[10];
  printf("Enter string: ");
  scanf("%s", str);
  //check whether string is palindrome or not.
  //orignal word = reverse word then palindrome word.
  // else not palindrome
  int i,j,flag;
  j = strlen(str) - 1;
  while(i <= j)
  {
    if(str[i]==str[j])
      flag = 1;
    else
    {
      flag = 0;
      break;
    }
    i++;
    j--;
  }
  if(flag == 1)
    printf("\nString is palindrome. ");
  else
    printf("\nstring is not palindrome.");

}
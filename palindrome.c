//Write a program to accept a 5 digit number and check whether it is a numeric palindrome. 
#include<stdio.h>
int main()
{
  int n, orignal, reminder, reverse = 0;
  printf("Enter number: ");
  scanf("\n%d",&n);

  orignal = n;
  while (n != 0)
  {
    reminder = n % 10;
    printf("\n%d",reminder);
    reverse = reverse*10 + reminder;
    printf("\n%d",reverse);
    n = n/10;
    printf("\n%d",n);
  }

  if(orignal == reverse)
  {
    printf("\n%d is palindrome",orignal);
  }
  else
  {
    printf("\n%d is not palinderome",orignal);
  }
  return 0;
} 
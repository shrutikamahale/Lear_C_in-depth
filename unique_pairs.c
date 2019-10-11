//Write a program to accept a number and print unique pairs of numbers such that multiplication of //the pair is given number
//Input: 24
//Output:
//1 * 24 = 24
// 2 * 12 = 24
// 3 * 8 = 24
// 4 * 6 = 24
#include<stdio.h>
int main()
{
  int no,i = 1,mul;

  printf("Enter number: ");
  scanf("%d", &no);
  while(i < no)
  {
    
    if(no % i == 0)
    {
      if(i < no/i)
      printf("\n %d * %d = %d",i,no/i,no);
    }
    i++;

  }


}
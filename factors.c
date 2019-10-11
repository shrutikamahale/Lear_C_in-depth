//Write a program to accept a number and print all factors excluding the number
//Input: 24
//Output: all factors: 1, 2, 3, 4, 6, 8, 12

#include<stdio.h>
int main()
{
  int no, i;

  printf("Enter number: ");
  scanf("%d", &no);
  for(i = 1; i <= no; i++)
  {
    if(no%i == 0)
      printf("\nfactors of number are: %d", i);
  }
}
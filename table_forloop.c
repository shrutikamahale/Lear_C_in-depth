//write a program to print table of a given number.
#include<stdio.h>
int main()
{
  int no,i,tbl;
  printf("Enter number: ");
  scanf("\n%d", &no);
  for(i = 1; i<=10; i++)
  {
    tbl = no*i;
    printf("\n%d*%d = %d",no,i,tbl);
  }

}
//program to find out factorial of number. 

#include<stdio.h>
long int factorial(int n);
int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  if(num<0)
    printf("No factorial for negative number.\n");
  else
    printf("Factorial of %d is %ld",num,factorial(num));
}
long int factorial(int n)
{
  int i;
  long int fact = 1;
  if(n == 0)
    return 1;
  for(i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}
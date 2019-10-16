// Write a function to calculate sum and product into a single function.
// a. Using global variables (for result)

#include<stdio.h>
int x = 50;
int y = 50;
int sum_product(int *p, int *q);
int main()
{
  sum_product(x,y);
}
int sum_product(int *p, int *q)
{
  p = &x;
  q = &y;
  int sum = *p + *q;
  printf("\nSum of two numbers is: %d",sum);
  int mul = *p * *q;
  printf("\nMultiplication of two numbers is: %d",mul);
}
// b. Without using global variables
#include<stdio.h>
int sum_product(int *p, int *q);
int main()
{
  int x1;
  int y1;
  sum_product(x1,y1);
}
int sum_product(int *p, int *q)
{
  int x = 45;
  int y = 25; 
  p = &x;
  q = &y;
  int sum = *p + *q;
  printf("\nSum of two numbers is: %d",sum);
  int mul = *p * *q;
  printf("\nMultiplication of two numbers is: %d",mul);
}
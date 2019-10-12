//8. Write a function to return next term of Fibonacci series with each call to the function.
#include<stdio.h>
void fibonacci(int n);
int main()
{
  int f;
  fibonacci(f);
}
void fibonacci(int n)
{
  long x,y,z;
  x = 0;
  y = 1;
  printf("Enter number: ");
  scanf("%d", &n);
  printf("% ld", y);  
  while(n > 0)
  {
    z = x + y;
    printf(" %ld",z);
    x = y;
    y = z;
    n--; 
  }
}
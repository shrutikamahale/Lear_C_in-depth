//program to find larger of two numbers.
#include<stdio.h>
int max_of_two_numbers(int a, int b);
int main()
{
  int x, y;
  printf("Enter number 1 and number 2: ");
  scanf("%d %d", &x, &y);
  printf("Maximum of %d and %d is: %d\n",x,y,max_of_two_numbers(x, y));
}
int max_of_two_numbers(a, b)
{
  if(a > b)
    return a;
  else
    return b;
}
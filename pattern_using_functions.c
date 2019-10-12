// Write a function to print a given character for a given number of times.
#include<stdio.h>
void pattern(int x);
int main()
{
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  pattern(n);

}
void pattern(int x)
{
  while(x != 0)
  {
    printf(" *");
    x--;
  }
}
  

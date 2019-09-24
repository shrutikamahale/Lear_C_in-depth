//program to understand the use of continue statement.
#include<stdio.h>
int main()
{
  int n;
  for (n = 1; n <= 5; n++)
  {
    if(n == 3)
    {
      printf("I understand the use of continue statement\n");
      continue;
    }
    printf("numbers = %d\n",n);
  }
  printf("Out for the loop\n");
}
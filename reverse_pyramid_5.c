// write a program to print 
  1  1  1  1  1
  2  2  2  2
  3  3  3
  4  4
  5

#include <stdio.h>
int main()
{
  int i,j,n;
  printf("Enter n: ");
  scanf("%d", &n);

  for(i = n; i >= 1; i--)
  {
    for(j = 1; j<=i; j++)
    {
      printf("%3d", n + 1 - i);   
    }
    printf("\n");
  }

}
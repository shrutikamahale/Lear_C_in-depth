// write a program to print 
  5  4  3  2  1
  5  4  3  2
  5  4  3
  5  4
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
      printf("%3d", n+1-j);   
    }
    printf("\n");
  }

}
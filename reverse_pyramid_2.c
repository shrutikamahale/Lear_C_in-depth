//write a program to print pyramid like 
  5  5  5  5  5
  4  4  4  4
  3  3  3
  2  2
  1




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
      printf("%3d", i);   
    }
    printf("\n");
  }

}
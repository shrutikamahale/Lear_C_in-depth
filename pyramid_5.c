//write a program which will print pyramid like  
  5
  5   4
  5   4   3
  5   4   3   2
  5   4   3   2   1

#include <stdio.h>
int main()
{
  int i,j,n;
  printf("Enter n: ");
  scanf("%d", &n);

  for(i = n; i >= 1; i--)
  {
    for(j = n; j>=i; j--)
    {
      printf("%3d ", j);   
    }
    printf("\n");
  }


}
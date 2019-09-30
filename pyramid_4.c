// program to print pyramid like 
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
//if number is even it should print 1 and if number is odd it should print 0

#include <stdio.h>
int main()
{
  int i,j,n;
  printf("Enter n: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++)
  {
    for(j = 1; j<= i; j++)
    if((i+j) % 2 == 0)
    {
      printf("1 ");
    }
    else printf("0 ");
    printf("\n"); 
  }

}
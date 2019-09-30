//wap to print pyramid like 
//*  *  *  *  *
//*  *  *  *
//*  *  *
//*  *
//*


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
      printf("*  ");   
    }
    printf("\n");
  }

}
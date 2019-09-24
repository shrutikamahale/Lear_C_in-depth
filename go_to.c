// Program to print number is even or odd using go to statements.
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  if (n % 2 == 0)
    goto even;
  else
    goto odd;
  even:
    printf("number is even");
    goto end;
  odd: 
    printf("number is odd");
    goto end;
  end:
    printf("/n");      
}
//multiply two positive numbers without using * operator
#include <stdio.h>
int main()
{
  int n1, n2, i;
  int result = 0;
  printf("Enter number 1: ");
  scanf("%d", &n1);
  printf("Enter number 2: ");
  scanf("%d", &n2);
  for(i = 1; i <= n2; i++)
      result += n1;
  printf("Product of numbers: %d & %d = %d", n1,n2,result);

}
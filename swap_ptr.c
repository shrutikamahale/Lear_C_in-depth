//function to swap 2 numbers.
#include<stdio.h>
void swap (int *a, int *b);
int main()
{
  int num1;
  int num2;
  printf("Enter num1 and num2: ");
  scanf("%d %d",&num1, &num2);
  swap (&num1, &num2);
  printf("\nBefore swapping:  num1 = %d, num2 = %d",num2,num1);
  printf("\n\nAfter swapping:  num1 = %d, num2 = %d",num1,num2);
  
}
void swap (int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
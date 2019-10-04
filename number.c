//3. Write a program to accept number and check whether the number is +ve, -ve and zero.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int num;
  printf("Enter num: ");
  scanf("%d",&num);

  if(num > 0)
    printf("Positive number");
  else if (num < 0)
    printf("Negative number");
  else
    printf("number is zero");
}

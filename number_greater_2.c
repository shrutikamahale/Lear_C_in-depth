//Write a program to find maximum of two numbers u

//a. If – else
//b. conditional operator.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int num1,num2;
  printf("Enter 1st number: ");
  scanf("%d",&num1);
  printf("Enter 2nd number: ");
  scanf("%d",&num2);

  if(num1 > num2)
    printf("number 1 is greater");
  else
    printf("number 2 is greater");
}  

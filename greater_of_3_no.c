//Write a program to find maximum of 3 numbers u

//a. If – else
//b. conditional operator.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int num1,num2,num3;
  printf("Enter 1st number: ");
  scanf("%d",&num1);
  printf("Enter 2nd number: ");
  scanf("%d",&num2);
  printf("Enter 3rd number: ");
  scanf("%d",&num3);

  if(num1 > num2)
    printf("number 1 is greater");
  else if (num2 > num3)
  {
    printf("number 2 is greater");
  }
  else if (num1 > num3)
  {
      printf("number 1 is greater");
  }
  else 
  {
      printf("number 3 is greater");
  }


}  

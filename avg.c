//Write a program to accept three integer numbers and find its average.
#include<stdio.h>
int main(void)
{
  float num1, num2, num3, avg;
  printf("Enter number1: ");
  scanf("%f",&num1);
  printf("Enter number2: ");
  scanf("%f",&num2);
  printf("Enter number3: ");
  scanf("%f",&num3);

  avg = (num1+num2+num3)/3;
  printf("%f",avg);
}

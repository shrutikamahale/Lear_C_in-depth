//Write a program to accept three integer numbers and find its average.
#include<stdio.h>
int main(void)
{
  float celsius, Fahrenheit;

  printf("Temperature = 1.Celsius 2.Fahrenheit");

  printf("\nEnter tempreture in celsius: ");
  scanf("%f", &celsius);

  Fahrenheit = celsius * 1.8 + 32;
  
  printf("Temprature in Fahrenheit: %f",Fahrenheit);


  printf("\nEnter tempreture in Fahrenheit: ");
  scanf("%f", &Fahrenheit);

  celsius = (Fahrenheit-32) / 1.8;
  printf("Temprature in celsius: %f",celsius);
}
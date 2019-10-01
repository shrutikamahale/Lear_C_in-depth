//write a program to calculate simple intrest.
#include<stdio.h>
int main(void)
{
  float si, pri, roi, noy;
  printf("Enter principle: ");
  scanf("%f", &pri);
  printf("Enter the rate of intrest: ");
  scanf("%f", &roi);
  printf("Enter number of year: ");
  scanf("%f", &noy);
  scanf("Enter number of years:: ");
  si = (float) pri * roi * noy / 100;
  printf("Principle = %f\n Simple Intrest = %f", pri, si);
  return 0;
}
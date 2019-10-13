/*program to raise a floating point number to positive integer using recursion*/
#include<stdio.h>
float power(float a, int n);
int main()
{
  float num, pwr;
  int r;
  printf("Enter num and pwr: ");
  scanf("%f %f", &num,&pwr);
  r = power(num, pwr);
printf("%.2f raised to power %.2f is %d\n",num,pwr,r);
}
float power(float a, int n)
{
  if(n==0)
    return 1;
  else
    return (a*power(a,(n-1)));
}
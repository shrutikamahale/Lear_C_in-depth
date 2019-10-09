//Write a function to calculate power.
#include<stdio.h>
long int power(int b, int e);
int main()
{
  int base, exponant;
  long int result = 1;
  printf("Enter base: ");
  scanf("%d", &base);
  
  printf("Enter exponant: ");
  scanf("%d", &exponant);

  printf("power of base %d and exponant %d is :  %ld", base, exponant, power(base, exponant));
}
long int power(int b, int e)
{
  long int ans = 1 ;

  if(e == 0)
    return ans*1;
  else
    while(e != 0)
    {
     ans = ans * b;
      --e;  
    }
    return ans;
}
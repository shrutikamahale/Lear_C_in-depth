/*program that returns the sum of squares of all odd numbers from 1 to 25*/

#include<stdio.h>
int func(void);
int main()
{
    printf("%d\n",func());
}
int func(void)
{
  int num, s = 0;
  for(num = 1;num <= 25;num++)
  {
    if(num%2 != 0)
        s += num*num;
  }
  return s;
}
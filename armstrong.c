//Check whether it is Armstrong no. (when sum of cube of all digits of equals the number then the number is called as Armstrong number)
#include<stdio.h>
int main()
{
  int n, rem, sum = 0,temp;
  printf("Enter number: ");
  scanf("%d",&n);

  temp = n;
  while(n > 0)
  { 
    rem = n % 10;
    sum += rem*rem*rem;
    n /= 10;
  }
  if(temp == sum)
    printf("%d is armstrong number",sum);
  else
    printf("%d is not armstrong number",sum);

}
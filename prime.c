#include<stdio.h>
#include<math.h>
int main()
{
  int num, i, flag = 1;
  printf("Enter a number: ");
  scanf("%d", &num);

  for(i = 2; i <= sqrt(num); i++)
  {
    if(num % i == 0)
    {
      printf("%d is not prime\n",num);
      flag = 0;
      break;
    }
  }
  if(flag == 1)
    printf("%d is prime\n",num);
}
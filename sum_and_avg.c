//program to find sum and average of 10 positive integerers
#include<stdio.h>
int main()
{
  int n, i = 1, sum = 0;
  float avg;
  printf("Enter 10 positive integeres: \n");
  while(i <= 10)
  { 
    printf("Enter number %d: ", i);
    scanf("%d", &n);
    if(n < 0)
    {
      printf("please enter positive integeres\n");
      continue;
    }
    sum = sum + n;
    i++;
  }
  printf("Sum of 10 integeres are: %d\n",sum);
  avg = sum / 10.0;
  printf("avg of 10 integeres are: %f\n",avg);  
}
//program to find out given number is even or odd.
#include<stdio.h>
void find( int n);
int main()
{
  int no;
  printf("Specify numbers: ");
  scanf("%d",&no);
  find(no);
}
void find( int n)
{
  if(n%2 == 0)
    printf("%d is Even number",n);
  else
    printf("%d is Odd number",n);
}
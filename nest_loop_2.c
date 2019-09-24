//Program to find sum of a digit until sum is reduced to 1
#include<stdio.h>
int main( )
{
long num;
int dig, sum;
printf ("Enter a number: ");
scanf("%ld",&num);
printf("%ld->", num);
    do
    {
        for(sum = 0;num!=0; num/= 10)
        {
            dig=num % 10;
            sum+=dig;
        }
        printf("%d\t",sum);
        num=sum;
    }while(num/10 != 0);
    printf("\n");
}

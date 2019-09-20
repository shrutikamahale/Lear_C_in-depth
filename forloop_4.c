//Find the sum of this series upto n terms
#include<stdio.h>
int main()
{
    int i, n, sum = 0, term = 1;
    printf("Enter the numbers of term: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term + i; 
    }
    printf("The sum of series upto %d term is %d\n", n,sum);
}
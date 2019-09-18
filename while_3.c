//program to print sum of digit of any numbers.

#include<stdio.h>
int main()
{
    int n, sum = 0, rem;

    printf("Enter the numbers: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("Sum of digits of any numbers:  %d\n", sum);
    
    
}

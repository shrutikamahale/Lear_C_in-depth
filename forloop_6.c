#include<stdio.h>
int main()
{
    int i, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &i);
    for(;i > 0; i/=10)
    {
        rem = i % 10;
        sum = sum + rem;
    }
    printf("Sum of digits: %d\n", sum);

}
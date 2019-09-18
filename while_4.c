//program to print product of digit of any numbers.
# include<stdio.h>
int main()
{
    int n, rem, prod = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n > 0);
    {
        rem = n % 10;
        prod = prod * rem;
        n = n/10;
    }

    printf("Product of numbers: ", prod);
    
}
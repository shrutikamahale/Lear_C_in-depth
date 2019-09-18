// write a program to convert binary to dechimal
#include<stdio.h>
int main()
{
    int n, j = 1, rem, nsave, d, dec = 0;
    printf("Enter the number in binary: ");
    scanf("%d", &n);
    nsave = n;
    while (n > 0)
    {
       rem = n % 10;
       d = rem * j;
       dec = dec + d; 
       j = j*2;
       n = n/10;
    }
    printf("binary no: %d, Decimal No: %d", nsave,dec);
}
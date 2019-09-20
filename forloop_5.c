//Program to generate fibonacci series
#include<stdio.h>
int main()
{
    long x,y,z;
    int i, n;
    x = 0;
    y = 1;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    printf("ld ", y);

    for(i = 1; i < n; i++)
    {
        z = x + y;
        printf("%ld ", z);
        x = y;
        y = z;
    }
    printf("\n");

}
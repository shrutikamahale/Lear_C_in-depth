//program to understand use of break statement.

#include<stdio.h>
int main()
{
    int n;
    for(n = 1; n <= 5; n++)
    {
        if(n == 3)
        {
            printf("i understand the use of break statement.\n");
            break;
        }
        printf("number = %d\n",n);
    }
    printf("Out for loop\n");
}
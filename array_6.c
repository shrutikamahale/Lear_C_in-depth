//Write a function to accept array elements from the user. Write another function to print array
//elements.
#include <stdio.h>
int main()
{
  int num[5];
  int total;
  printf("Accept Elements");
  for(int i = 0; i<5; i++)
  {
    printf("\nEnter Marks: ");
    scanf("%d", &num[i]);
  }
  printf("\nDisplaying Elements");
  
  for(int i = 0; i<5; ++i)
  {
    printf("\nEntered marks %d\n",num[i]);
  }
  
}

//program to print the value of array elements using pointer and subscript notation.
#include<stdio.h>
int main()
{
  int arr[5] = {5,10,15,20,25};
  int i = 0;
  for(i = 0; i <5; i++)
  {
    printf("Value of arr[%d]= \n",i);
    printf("%d\t",arr[i]);
    printf("%d\t",*(arr+i));
    printf("%d\t",*(i+arr));
    printf("%d\t",i[arr]);
    printf("%d\t",i,&arr[i]);
    
  }
}
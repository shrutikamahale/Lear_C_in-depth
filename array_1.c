//program to print the value and address of element of an array using pointer notation.
#include<stdio.h>
int main()
{
  int arr[5] = {5,10,15,20,25};
  int i;
  for(i = 0; i <= 5; i++)
  {
    printf("value of arr[%d]= %d\t",i,*(arr+i));
    printf("Address of arr[%d]= %d\n",i,arr+i);
  }
}
//program to print the value and address of array elements by subscripting a pointer variable
#include<stdio.h>
int main()
{
  int arr[5] = {5,10,15,20,25};
  int i, *p;
  p = arr;
  for(i = 0; i< 5; i++)
  {
    printf("address of arr [%d] = %u %u\n",
    arr+i, p+i);

    printf("value of arr [%d] = %d  %d %d %d\n",i,
    arr[i], *(arr+i), *(p+i));

  }

}
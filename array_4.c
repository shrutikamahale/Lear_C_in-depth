//program to understand difference between pointer to an integer and pointer to an array of integers.
#include<stdio.h>
int main()
{
  int *p;//points to an integer
  int (*ptr) [5];//points to whole array;
  int arr[5];
  p = arr;//points to 0th element of array
  ptr = arr;//pointes to the whole array;
  printf("p = %u, ptr = %u\n",p,ptr);
  p++;
  ptr++;
  printf("p = %u, ptr = %u\n",p,ptr);

} 
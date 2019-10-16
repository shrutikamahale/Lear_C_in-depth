//program to derefrence a pointer to an array.
#include<stdio.h>
int main()
{
  int arr[5] = {3,5,6,7,9};
  int *p = arr;
  int (*ptr)[5] = arr;
  printf("p = %lu, ptr = %lu\n",p,ptr);
  printf("p = %d, *ptr = %lu\n",p,*ptr);
  printf("sizeof(p) = %lu, size(*p) = %lu\n",sizeof(p),sizeof(*p));
  printf("sizeof(ptr) = %lu, sizeof(*ptr = %lu)\n",sizeof(ptr),sizeof(*ptr)); 
} 
//Write a function to search the given number into the array using linear search and return the
//index of the element. If element is not found it should return -1.
#include<stdio.h>
#define SIZE 5
int main()
{
  int arr[SIZE];
  int i,k,item;
  printf("Enter elements of the array: ");
  for(i = 0; i < SIZE; i++)
  scanf("%d",&arr[i]);

  for(k=1; k < SIZE; k++)
  {
    item = arr[k];
    for(i = k-1; item < arr[i] && item >= 0;i--)
    {
      arr[i+1] = arr[i];
      arr[i] = item;
    }
  }
  printf("Sorted array is: ");
  for(i = 0; i < SIZE; i++)
    printf("  %d",arr[i]);
  printf("\n");

}
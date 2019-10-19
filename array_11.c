//7. Write a function to sort the array using selection or bubble sort
#include<stdio.h>
#define SIZE 5
int main()
{
  int arr[SIZE];
	  int i, j,temp;
	  printf("Enter elements in array: ");
	  for(i = 0; i<SIZE; i++)
	    scanf("%d", &arr[i]);

	  for(i = 0; i<SIZE-1; i++)
	  {
	    for(j = 0; j < SIZE-i-1; j++)
	    {
	      if(arr[j]>arr[j+1])
        {
          temp = arr[j];
	        arr[j] = arr[j+1];
	        arr[j+1] = temp;
        }
        
	    }
	  }
	  printf("Sorted array is: ");
	  for(i = 0; i<SIZE; i++)
	    printf(" %d", arr[i]);
	  printf("\n");
	return 0;
}
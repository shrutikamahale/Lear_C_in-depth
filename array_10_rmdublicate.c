//Write a function to remove duplicate elements from the array. After processing the array should store only the unique elements consecutively. Also function should return the number of unique elements into the array.
#include<stdio.h>
int main()
{
  int arr[50];
  int i,j,k,n;
  printf("Enter no. of elements: ");
  scanf("%d",&n);

  printf("Enter array elements: ");
  for(i=0; i<n; i++)
    {
      scanf("%d",&arr[i]);
    }
  for(i = 0; i < n; i++)
  {
    for(j = i+1; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        for(k = j; k < n; k++)
        {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
  }

printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
  
}
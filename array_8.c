//3. Write a function to reverse the array elements.
#include<stdio.h>
int main()
{
  int arr[10],i,size,temp,n;

  printf("Enter no of elements: ");
  scanf("%d",&n);

  size = n-1;

  printf("Enter array elememts: ");
  for(i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i = 0; i < n/2; i++)
  {
    temp = arr[i];
    arr[i] = arr[size];
    arr[size] = temp;
    size--;
  }
  for(i = 0; i < n; i++)
  {
    printf("%d\n",arr[i]);
  }


}
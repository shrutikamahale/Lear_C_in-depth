//program to find out maximum element of array....
#include<stdio.h>
int cal_greatest(int arr[], int n);
int cal_smallest(int arr[], int n);
int main()
{
  int arr[5];
  int n;
  int i;
  n = sizeof(arr)/sizeof(arr[0]);
  printf("Enter elements: ");
  for(i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\n greatest element in array is : %d",cal_greatest(arr,n));
  printf("\n smallest element in array is : %d",cal_smallest(arr,n));

}
int cal_greatest(int arr[], int n)
{
  int i;
  int max = arr[0];
  for(i = 1; i < n; i++)
  if(arr[i] > max)
      max = arr[i];
  return max;
}
int cal_smallest(int arr[], int n)
{
  int i;
  int min = arr[0];
  for(i = 1; i < n; i++)
  if(arr[i] < min)
      min = arr[i];
  return min;
}
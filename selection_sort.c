#include <stdio.h>
//void swap_elemnets(int arr[], int i);
  int main(void) 
  {
    // Enter array elements.
   int arr[5];
   int i, j, n;
   int min;
   int temp;

   printf("Enter no. of array elements ");
   scanf("%d",&n);
   printf("\nEnter %d array element: ", n);
   for(i = 0; i < n; i++)
   {
     scanf("%d", &arr[i]);
   }
   for(i=0; i < n-1; i++)
   {
    //int min = 1;
     for(j = i+1; j < n; j++)
     {
       if(arr[j] < arr[i])
       {
         temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp ; 
       }
        
     }
   }
   //Sort array elements.
      //display array elements.
  for(i = 0; i < n; i++)
   {
     printf(" %d", arr[i]);
   }

 }

// void swap_elemnets(int arr[], int i)
// {
//   main();
//   int j;
//   int temp;
//   int min = i;
         
// }
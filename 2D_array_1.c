//Write a function to accept a 2-D array from the user. Write another function to print the 2-D
//array. Re-use these functions in rest of the assignments wherever required.
#define ROW 3
#define COL 4
#include<stdio.h>
int main()
{
  int mat[ROW][COL],i,j;
  printf("Enter the elements in array (%dx%d) Row wise: ",ROW,COL);
  for(i = 0; i < ROW; i++)
    for(j = 0; j < COL; j++)
      scanf("%d",&mat[i][j]);

  printf("Matrix you have entered is: \n");
  for(i = 0; i < ROW; i++)
  {
    for(j = 0; j < COL; j++)
      printf("%5d", mat[i][j]);
    printf("\n");
  }
  //printf("\n");
       
}
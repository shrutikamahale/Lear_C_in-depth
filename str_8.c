//Program to print the strings of two directional character array......
#include <stdio.h>
#define N 5
#define LEN 10
int main() 
{
  char str[N][LEN] = 
  {
    "White",
    "red",
    "green",
    "yellow",
    "blue"
  };
  int i;
  
  for(i = 0; i < N; i++)
  {
    printf("String = %s\t", str[i]);
    printf("Address of string = %u\n",str[i]);
  }

}
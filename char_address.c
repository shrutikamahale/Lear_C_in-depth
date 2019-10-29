#include<stdio.h>
int main()
{
  int i;
  char *arrp[] = {
    "white",
    "red",
    "green",
    "yellow",
    "blue"
  };
  for(i = 0; i < 5; i++)
  {
    printf("\n String : %s\t", arrp[i]);
    printf("\n Address of string : %u\t", arrp[i]);
    printf("\n Address of string is stored at : %u\n"
    ,arrp+i );
  } 
}
#include<stdio.h>
void drawline (void); // function declaration
int main()
{
  drawline();   // function call
}
void drawline (void) // function defination
{
  int i;
  for (i = 1; i <= 80; i++)
    printf("-------");
}
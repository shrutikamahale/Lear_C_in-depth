//Write a program to accept a point in Cartesian co-ordinate system.
#include<stdio.h>
int main()
{
  int x, y;
  printf("Enter point x: ");
  scanf("%d",&x);
  printf("Enter point y: ");
  scanf("%d",&y);

  if (x > 0 && y > 0)
    printf("Point lies in First quadrent");
  else if (x < 0 && y > 0)
    printf("Point lies in Second quadrent");
  else if (x < 0 && y < 0)
    printf("Point lies in Third quadrent");
  else if (x > 0 && y < 0)
    printf("Point lies in Fourth quadrent");
  else if (x == 0 && y == 0)
    printf("Point lies at the origin");
}
#include <stdio.h>

int main(void) {
  long x,y,z;
  int i,n;
  x = 0;
  y = 1;
  printf("Enter number: ");
  scanf("%d", &n);
  printf("%ld",y);

  for(i = 1; i < n; i++)
  {
    z = x + y;
    printf(" %ld", z);
    x = y;
    y = z;
  }
  return 0;
}   
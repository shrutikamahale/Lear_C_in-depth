//program to understand use of return statement.
#include<stdio.h>
void function(int age, float height);
int main()
{
  int age;
  float ht;
  printf("Enter age and height: ");
  scanf("%d %f", &age, &ht);
  function(age, ht);
  
}
void function(int age, float height)
{
  if(age > 25)
  {
    printf("age should be less than 25\n");
    return;
  }
  if (height < 5)
  {
    printf("Height should be more than 5\n");
    return;
  }
  printf("Selected\n");
}
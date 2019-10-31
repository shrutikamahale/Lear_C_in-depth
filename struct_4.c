//program to undestand array of structure.
//program to understand array of structure.
#include<stdio.h>
struct student {
  char name[20];
  int rollnum;
  float marks;
};
int main()
{
  int i;
  struct student stuarr[10];
  for(i = 0; i <= 10; i++)
  {
    printf("Enter name, rollnum and marks: ");
    scanf("%s %d %f",stuarr[i].name,&stuarr[i].rollnum,&stuarr[i].marks);
  }
  for(i = 0; i < 10; i++)
  {
    printf("%s %d %f \n",stuarr[i].name, stuarr[i].rollnum,stuarr[i].marks);
  }
}
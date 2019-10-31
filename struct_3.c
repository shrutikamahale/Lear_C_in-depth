//programto show that members of structure is stored in consecutive memory locations.
#include<stdio.h>
int main()
{
  struct student 
  {
    char name[5];
    int rollnum;
    float marks;
  }stu;

  printf("Address of name: %u", stu.name);
  printf("\nAddress of rollnum: %u", &stu.rollnum);
  printf("\nAddress of marks: %u", &stu.marks);
}
//program to understand pointers to structure.
#include<stdlib.h>
struct student{
  char name[20];
  int rollno;
  int marks;
};
int main()
{
  struct student stu = {"Mary", 25, 68};
  struct student *ptr = &stu;
  printf("name - %s\t", ptr->name);
  printf("rollno - %d\t", ptr->rollno);
  printf("marks - %d\t", ptr->marks);
}
//program to understand how a sturcture variable is passed to a function as a argument.
#include<stdio.h>
#include<string.h>
struct student{
  char name[20];
  int rollno;
  int marks;
};
void display(struct student);
int main()
{
  struct student stu1 = {"John", 20, 70};
  struct student stu2 = {"clay", 21, 90};
  display(stu1);
  display(stu2);
}
void display(struct student stu)
{
  printf("name = %s\t", stu.name);
  printf("rollno = %d\t", stu.rollno);
  printf("marks = %d\t", stu.marks);


}
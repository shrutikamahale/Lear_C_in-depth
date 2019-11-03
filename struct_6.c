//program to understand how structure members are send to functions.
#include<stdio.h>
#include<string.h>
struct student {
  char name[20];
  int rollno;
  int marks;
};
display(char name[], int rollno, int marks);
int main()
{
  struct student stu1 = {"MARY", 20, 50};
  struct student stu2;
  strcpy(stu2.name, "John");
  stu2.rollno = 21;
  stu2.marks = 60;
  display(stu1.name, stu1.rollno, stu1.marks);
  display(stu2.name, stu2.rollno, stu2.marks); 
}
display(char name[], int rollno, int marks)
{
  printf("Name = %s\n",name);
  printf("rollno = %d\n",rollno);
  printf("marks = %d\n",marks);
}
//program to display the values of structure members.
#include<stdio.h>
#include<string.h>
struct student
{
  char name[20];
  int rollnumber;
  float marks;
};


int main()
{
  struct student stu1 = {"Mary",25,68};
  struct student stu2,stu3;
  strcpy(stu2.name,"john");
  stu2.rollnumber = 26;
  stu2.marks = 98;
  printf("Enter name, roll number and marks for stu3 ");
  scanf("%s %d %f",stu3.name, &stu3.rollnumber,
  &stu3.marks);
  printf("stu1: %s %d %.2f\n",stu1.name,stu1.rollnumber,stu1.marks);
  printf("stu2: %s %d %.2f\n",stu2.name,stu2.rollnumber,stu2.marks);
  printf("stu3: %s %d %.2f\n",stu3.name,stu3.rollnumber,stu3.marks);

}
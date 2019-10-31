//program to asign values of structure variable to another structure variable.
struct student = {
  char name = [20];
  int rollnum;
  float marks;
};
int main()
{
  struct student stu1 = {"Oliver", 12, 98};
  struct student stu2;
  stu2 = stu1;
  printf("stu1: %s %d %.2f\n",stu1.name, stu2.rollnum, stu1.marks);
  printf("stu1: %s %d %.2f\n",stu2.name, stu2.rollnum, stu2.marks);

}
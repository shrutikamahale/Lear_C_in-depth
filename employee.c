//Write a program to accept Employee Id , Department No, Designation from user and display
//output with reference to following tables.

//DeptNo Dept Name DsgnCode 
//10 Marketing    'M' Manager
//20 Management   'S' Supervisor
//30 Sales         s' Security Officer
//40 Designing    'C' Clerk

#include<stdio.h>
int main()
{
  int emp_id,dept_no;
  printf("\nWelcome to department A");
  printf("\n\n\nEnter emp_id and dept_no: ");
  scanf("\n%d %d",&emp_id,&dept_no);
  printf("\nEmployee with employee id %d is working as ", emp_id);

  switch(dept_no)
  {
     default:
            printf(" Unknown.. ");
            break;
    case 10:
            printf("Marketing Manager");
            break;
    case 20:
            printf("Supervisor");
            break;
    case 30:
            printf("Security Officer");
            break;
    case 40:
            printf("Clerk");
            break;
  }
  printf("\n\nI hope you find your employee...Have a good day :) ");            
}
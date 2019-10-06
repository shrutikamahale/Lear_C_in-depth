//Write a program to display number of days in the given month and year.
#include<stdio.h>
int main()
{
//fill the code
int year, month;
printf("\nEnter month: ");
scanf("\n%d" ,&month);
printf("\nEnter year: ");
scanf("\n%d" ,&year);



if(month == 1 || month == 3 || month == 5 || 
month == 7 || month == 8 || month == 10 || 
month == 12)
{
  printf("Number of days is 31");
}
else if((month == 2) && (year%4 == 0) || 
((year%100 == 0) &&(year%400 == 0)))
{
  printf("Number of days is 29");
}
else if(month == 2)
{
  printf("Number of days is 28");
}
else
  printf("Number of days is 30");

return 0;
}
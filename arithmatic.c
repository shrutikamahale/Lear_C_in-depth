//program to perform arithmatic operations on integeres.
#include<stdio.h>
int main()
{
  char op;
  int a,b;
  printf ("Enter number operator: ");
  scanf("%d%c%d", &a, &op, &b) ;
  switch(op)
  {
    case '+':
      printf ("Result = %d\n",a+b);
      break;
    case '-':
      printf ("Result = %d\n",a-b);
      break;
    case '*':
      printf("Result = %d\n",a*b);
      break;
    case '/':
      printf("Result = %d\n",a/b);
      break;
    case '%':
      printf("Result = %d\n",a%b);
      break;  
    default:
      printf("Enter valid operator\n");
  }
}
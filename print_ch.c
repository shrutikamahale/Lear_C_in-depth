//Write a program to accept a character and a number, and print the character number times
#include<stdio.h>

int main()
{
  char ch;
  int no;

  printf("\n Enter character: ");
  scanf("%c", &ch);

  printf("\n Enter number: ");
  scanf("%d", &no);

  while(no > 0)
  {
    printf(" %c", ch);
    no--;
  }  
}
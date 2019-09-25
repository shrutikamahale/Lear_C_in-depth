//program to find out whether a alphabet is vowel or constant. 
#include<stdio.h>
int main()
{
  char al;
  printf("Enter a alphabet: ");
  scanf("%c", &al);
  switch(al)
  {
    case 'a':
      printf("Alphabet is vowel");
      break;
    case 'e':
      printf("Alphabet is vowel");
      break;
    case 'i':
      printf("Alphabet is vowel");
      break;
    case 'o':
      printf("Alphabet is vowel");
      break;
    case 'u':
      printf("Alphabet is vowel");
      break;
    default:
      printf("Alphabet is constant");
  }
}
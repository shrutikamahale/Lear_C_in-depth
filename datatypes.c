/*
program to show range of datatypes.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
	 printf("Display range of data types using limits.h header file\n");
	 printf("\n Data type \t\t Size    Format Specifier    Lower Limit Upper Limit\n");
	 printf("\n int \t\t\t %-10ld %%d\t\t %-12d to %-12d\n",sizeof(int), INT_MIN, INT_MAX);
	 printf("\n unsigned char \t\t %-10ld %%c\t\t 0 to %-12d\n", sizeof(unsigned char), UCHAR_MAX);
	 printf("\n signed char \t\t %-10ld %%c\t\t %d to %-12d\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
	 printf("\n short int\t\t %-10ld %%hd\t    %d to %-12d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
	 printf("\n unsigned short int\t %-10lu %%u\t\t0 to %-12u\n", sizeof(unsigned short int), USHRT_MAX);

   return 0;

}

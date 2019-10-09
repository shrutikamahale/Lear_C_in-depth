/*
 ============================================================================
 Name        : calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	 float a,b;
	 char op;
	
   printf("Enter number 1-operator-number 2: ");
   scanf("%f %c %f", &a,&op,&b);

	 switch(op)
	 {
	 	 case '+':
	 		 printf("Addition : %f\n", a+b);
	 		 break;
	 	case '-':
	 		 printf("Subtraction : %f\n", a-b);
	 		 break;
	 	case '*':
	 		 printf("Multiplication : %f\n", a*b);
	 		 break;
	 	case '/':
	 		 printf("Division : %f\n", a/b);
	 		 break;
	 	// case '%':
	 	//  	printf("Modulus: %f\n", a%b);
	 	//  	break;
	 	default:
	 		printf("Enter valid operator");
	 }
	return EXIT_SUCCESS;
}

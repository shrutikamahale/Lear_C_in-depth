/*
 ============================================================================
 Name        : discount.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float price, discount,quantity;//1 unit price is rs 5
	printf("Enter quantity: ");
	scanf("\n%f", &quantity);
	if(quantity >= 30)
	{

		price = 5*quantity;
		discount = (price*10/100);
		printf("\n%f discount over %f", discount,quantity);
	}
	else if (quantity >= 50)
	{
		price = 5*quantity;
		discount = (price*15/100);
		printf("\n%f discount over %f", discount,quantity);
	}
	else
		printf("no discount");
		

	return EXIT_SUCCESS;
}

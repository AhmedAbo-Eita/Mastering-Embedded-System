/*
 * main.c
 *
 *  Created on: Mar 4, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

float number;

void main()
{
	//take inputs from user
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &number);
	fflush(stdin); fflush(stdout);

	if (number < 0 )
	{
		printf("%.2f is negative ", number);
	}
	else if (number > 0)
	{
		printf("%.2f is positive ", number);
	}
	else{
		printf("you entered zero");
	}

}

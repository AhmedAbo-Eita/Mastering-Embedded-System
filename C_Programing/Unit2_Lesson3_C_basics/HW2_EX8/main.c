/*
 * main.c
 *
 *  Created on: Mar 4, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

char operation;
float num1, num2;

void main()
{
	// take inputs from user
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operation);
	fflush(stdin); fflush(stdout);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &num1, &num2);
	fflush(stdin); fflush(stdout);

	if(operation == '+')
	{
		printf("%g %c %g = %g", num1, operation, num2, num1+num2 );
	}
	else if (operation == '-')
	{
		printf("%g %c %g = %g", num1, operation, num2, num1-num2 );
	}
	else if (operation == '*')
		{
			printf("%g %c %g = %g", num1, operation, num2, num1*num2 );
		}
	else if (operation == '/')
		{
			printf("%g %c %g = %g", num1, operation, num2, num1/num2 );
		}
}

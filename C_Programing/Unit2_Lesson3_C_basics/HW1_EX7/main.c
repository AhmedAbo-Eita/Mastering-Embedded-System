/*
 * main.c
 *
 *  Created on: Mar 2, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

float a,b;
void main()
{
	//take inputs from user
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &a );
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &b );

	//swap function
	a = a+b;
	b = a-b;
	a = a-b;

	//output after swap
	fflush(stdin);fflush(stdout);
	printf("After swapping, value of a = %g\nAfter swapping, value of b = %g", a, b);
}


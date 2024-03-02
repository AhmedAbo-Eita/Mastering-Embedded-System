/*
 * main.c
 *
 *  Created on: Mar 2, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

int num1,num2;

void main()
{
	fflush(stdin); fflush(stdout);
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &num1, &num2 );
	fflush(stdin); fflush(stdout);
	printf("sum: %d",num1+num2);
}


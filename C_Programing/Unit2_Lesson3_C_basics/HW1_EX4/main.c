/*
 * main.c
 *
 *  Created on: Mar 2, 2024
 *      Author: es-ahmedabdellatif20
 */
#include <stdio.h>

float num1,num2;
void main()
{
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f", &num1, &num2 );
	fflush(stdin);fflush(stdout);
	printf("sum: %f",num1*num2);
}

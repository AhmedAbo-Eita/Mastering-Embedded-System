/*
 * main.c
 *
 *  Created on: Mar 4, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>
float num1,num2,num3;

void main()
{
	//take inputs from user
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &num1, &num2 ,&num3);
	fflush(stdin); fflush(stdout);

	if (num1 > num2 && num1 > num3 )
	{
		printf("The largest number = %g", num1);
	}
	else if (num3 > num2 && num3 > num1)
	{
		printf("The largest number = %g", num3);
	}
	else
	{
		printf("The largest number = %g", num2);
	}

}

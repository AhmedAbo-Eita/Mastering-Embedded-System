/*
 * main.c
 *
 *  Created on: Mar 4, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

int num = 0;
void main ()
{
	//take input from user
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	fflush(stdin); fflush(stdout);

	// check if the number is odd or even
	if(num%2 == 0 )
	{
		printf("%d is even ", num);
	}
	else
	{
		printf("%d is odd ", num);
	}

}


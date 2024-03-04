/*
 * main.c
 *
 *  Created on: Mar 4, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

int number, factorial = 1;
int counter = 1;
void main()
{
	// take input from user
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);
	fflush(stdin); fflush(stdout);

	if (number > 0 )
	{
		// loop to calculate sum
		for (counter=1;counter<=number;counter++ )
		{
			factorial=factorial*counter;
		}
		printf("Factorial =  %d ", factorial);
	}
	else if (number < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else if(number == 0)
		printf("Factorial =  1 ");

}


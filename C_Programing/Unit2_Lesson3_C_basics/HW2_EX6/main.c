/*
 * main.c
 *
 *  Created on: Mar 4, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

int number, sum = 0;
int counter = 1;
void main()
{
	// take input from user
	printf("Enter an integar : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);
	fflush(stdin); fflush(stdout);

	// loop to calculate sum
	for (counter=1;counter<=number;counter++ )
	{
		sum=sum+counter;
	}
	printf("sum =  %d ", sum);

}

/*
 * main.c
 *
 *  Created on: Mar 2, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

int num = 0;
void main ()
{
	printf("Enter a integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d", &num);
	fflush(stdout); fflush(stdin);
	printf("your entered: %d",num);
}


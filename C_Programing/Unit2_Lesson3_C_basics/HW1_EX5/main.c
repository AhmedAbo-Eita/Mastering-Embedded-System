/*
 * main.c
 *
 *  Created on: Mar 2, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

char user_input ;
void main ()
{
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c", &user_input);
	fflush(stdin); fflush(stdout);
	printf("ASCII value of %c: %d", user_input, user_input);
}



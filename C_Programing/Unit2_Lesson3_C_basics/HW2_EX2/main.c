/*
 * main.c
 *
 *  Created on: Mar 4, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>

char input = 0; // input alphabet from user
void main ()
{
	//take input from user
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &input);
	fflush(stdin); fflush(stdout);

	// check if the alphabet  is Vowel or consonant
	if(input == 'A' || input == 'a' || input == 'E' || input== 'e' || input == 'O' || input == 'o' || input == 'u' || input == 'U' || input == 'i' || input == 'I')
	{
		printf("%c is a vowel ", input);
	}
	else
	{
		printf("%c is a consonant ", input);
	}

}

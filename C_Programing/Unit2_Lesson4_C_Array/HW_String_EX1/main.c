/*
 * main.c
 *
 *  Created on: Apr 22, 2024
 *      Author: es-ahmedabdellatif20
 */
#include<stdio.h>
#include<string.h>

char a[100];
int counter,flag = 0;// for loop counter
char input;

int main()
{
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(a);


	printf("Enter a character to find frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &input);


	for(counter = 0 ; counter <  strlen(a); counter++)
	{
		if(a[counter] == input )
		{
			flag = flag +1;
		}
	}

	printf("frequency of %c  = %d", input, flag);



	return 0;
}


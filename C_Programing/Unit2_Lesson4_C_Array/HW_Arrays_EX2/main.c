/*
 * main.c
 *
 *  Created on: Apr 21, 2024
 *      Author: es-ahmedabdellatif20
 */

#include <stdio.h>
int size; // the size of array (number of user inputs)
int counter; // Loop counter
float sum, average; // add user inputs

int main()
{
printf("Enter the numbers of data: ");
fflush(stdout); fflush(stdin);
scanf("%d", &size);

float a[size]; // matrix contains user inputs

for(counter=0; counter<size ;counter++)
{
	printf("%d. Enter number: ", counter+1);
	fflush(stdout); fflush(stdin);
	scanf("%f", &a[counter]);
	fflush(stdout); fflush(stdin);


}

// loop for finding the sum of user inputs
for(counter=0; counter<size ;counter++)
{
	sum= sum + a[counter];
}

average = sum / size;

printf("average = %.2f", average);


return 0;
}


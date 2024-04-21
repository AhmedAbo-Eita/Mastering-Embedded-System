/*
 * main.c
 *
 *  Created on: Apr 21, 2024
 *      Author: es-ahmedabdellatif20
 */

#include<stdio.h>
int num,in_num; // number of matrix elements and the inserted number
int location;
int counter; // counter of for loop

int main()
{
	// take the matrix from user
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	int mat[num];

	for(counter = 0 ; counter<num ; counter++)
	{
		scanf("%d", &mat[counter]);
	}

	// take the inserted element from user
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &in_num);

	// take the position of this element
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &location);

	// shift the values from the location
	for(counter = num ; counter >= 0 ; counter--)
	{
		if(counter >= location)
		{
			mat[counter]= mat[counter-1];
		}
	}

	// add the inserted number in wanted location
	mat[location-1] = in_num;

	//print the matrix

	for(counter =0 ; counter < num+1 ; counter++)
	{
		printf("%d ", mat[counter]);
	}




	return 0;
}

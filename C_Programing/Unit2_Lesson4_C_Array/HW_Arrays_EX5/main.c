/*
 * main.c
 *
 *  Created on: Apr 22, 2024
 *      Author: es-ahmedabdellatif20
 */

#include<stdio.h>
int num , counter, s_num;

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
	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &s_num);

	for(counter = 0 ; counter<num ; counter++)
		{
			if(s_num == mat[counter])
			{
				printf("number founded at location = %d\n", counter+1);
			}
		}

	return 0;

}


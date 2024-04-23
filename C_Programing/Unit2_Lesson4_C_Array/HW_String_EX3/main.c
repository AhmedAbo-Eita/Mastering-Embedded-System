#include<stdio.h>
#include<string.h>

char a[100],a1[100];
int counter = 0;

int main()
{
	// take input string from user
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(a);

	//copy string to another array
	strcpy(a1,a);

	//reverse the string
	for(counter = 0 ; counter < strlen(a); counter++)
	{
		a[counter]= a1[strlen(a)-counter-1];
	}

	// print reverse of string
	printf("Reverse string is : %s", a);


	return 0;
}

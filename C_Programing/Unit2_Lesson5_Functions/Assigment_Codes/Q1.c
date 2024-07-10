#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[100],arr2[100];
    printf("Enter a string : ");
    fflush(stdin);fflush(stdout);
    gets(arr1);
    printf("Enter your name : ");
    fflush(stdin);fflush(stdout);
    gets(arr2);
    if(stricmp(arr1,arr2))
    {
        printf("Different");
    }
    else
    {
        printf("Identical");
    }
    return 0;
}
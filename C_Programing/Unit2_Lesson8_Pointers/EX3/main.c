#include <stdio.h>
#include <string.h>
int main()
{
    char word[50];int counter;
    printf("Input a string : ");
    fflush(stdin);fflush(stdout);
    gets(word);
    char *ptr = word;
    ptr = ptr + strlen(word);
    printf("Reverse of the string is :");
    for(counter =0 ; counter <=strlen(word); counter++ )
    {
        printf("%c", *ptr);
        ptr--;
    }


    return 0;
}
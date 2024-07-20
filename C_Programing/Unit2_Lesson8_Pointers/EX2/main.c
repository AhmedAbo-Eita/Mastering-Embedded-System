#include <stdio.h>

int main()
{
    int counter =0;
    char c = 'A';
    char *ptr  = &c;
    for (counter = 0 ;counter <26 ; counter ++)
    {
        printf("%c  ", *ptr);
        *ptr = *ptr +1;
    }

    return 0;
}
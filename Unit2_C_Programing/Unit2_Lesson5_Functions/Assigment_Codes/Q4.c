#include <stdio.h>
#include <ctype.h> 

unsigned int ascii_to_uint(const char *str);

int main()
{
    char ascii_number[] = "12345";
    unsigned int number;

    number = ascii_to_uint(ascii_number);
    printf("The converted number is: %u\n", number);

    return 0;
}

unsigned int ascii_to_uint(const char *str)
{
    unsigned int result = 0;
    while (*str)
    {
        if (isdigit(*str))
        {
            result = result * 10 + (*str - '0');
            str++;
        }
    }
    return result;
}

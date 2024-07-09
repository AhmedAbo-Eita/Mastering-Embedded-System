#include <stdio.h>
void reverse();
int main ()
{
    printf("Enter a sentence: ");
    reverse();
    return 0; 
}

void reverse()
{
    char in;
    scanf("%c", &in);
    if(in != '\n')
    {
        reverse();
        printf("%c" , in);
    }

}

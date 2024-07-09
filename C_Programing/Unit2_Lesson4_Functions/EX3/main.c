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
    // function takes character from user till the user press enter and reverse it
    char in;
    scanf("%c", &in); // input from user 
    if(in != '\n')
    {
        reverse();
        printf("%c" , in);
    }

}

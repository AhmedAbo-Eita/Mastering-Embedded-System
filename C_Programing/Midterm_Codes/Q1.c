#include <stdio.h>
int SumOfDigets(int num);
int main  ()
{
    int input; 
    printf("Enter the number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &input);
    printf("The sum = %d", SumOfDigets(input));
    return 0;
}

int SumOfDigets(int num)
{
    int sum=0;
    while(num%10 || num>0)
    {
        sum=sum+(num%10);
        num = num /10;
    }
    return sum;
}
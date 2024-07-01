#include<stdio.h>
int factorial(int num1);

int main()
{
    int num,result;
    //take number from user
    printf("Enter an positive integar: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);
    result = factorial(num);
    if (num>=0)
    {
        printf("Factorial of %d = %d\n", num, result);
    }
    else
    {
        printf("Can't find the factorial of negative numbers");
    }
    
    
    //system("pause");
    return 0;
}


int factorial(int num1)
{
    
    if (num1>1)
    {
        num1 = num1* factorial(num1-1);
        return num1;
    }
    else
    {
        return 1;
    }
    
}
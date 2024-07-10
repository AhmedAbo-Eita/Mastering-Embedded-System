#include <stdio.h>
#include <math.h>
int CheckPowerOf3(int num1);
int main()
{
    int num;
    printf("Enter the number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);
    printf("Result --> %d", !CheckPowerOf3(num));
    return 0;
}

int CheckPowerOf3(int num1)
{
    double i = log(num1)/log(3);
    return i == trunc(i);
}

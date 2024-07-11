#include <stdio.h>
#include <math.h>
float squareroot(int num);
int main()
{
    int input;
    printf ("Enter hte number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d" ,&input);
    printf("%.3f", squareroot(input));
    return 0;
}
float squareroot(int num)
{
    float result;
    result = sqrt(num);
    return result;
}


#include <stdio.h>
int fpower(int n1, int n2);
int main ()
{
    int base,power,result;
    printf("Enter base number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &base);
    printf("Enter the power number(positive intiger): ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &power);
    result = fpower(base, power);
    printf("%d^%d = %d", base, power, result );
    return 0; 
}

int fpower(int n1, int n2)
{
    if(n2!=0)
    {
        return (n1*fpower(n1,n2-1));
    }
    else
    return 1;
}

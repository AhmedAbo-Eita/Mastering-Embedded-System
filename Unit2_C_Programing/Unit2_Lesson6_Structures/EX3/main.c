#include <stdio.h>
struct Complex 
{
    float real;
    float imag;
}num1,num2;

void sum (struct Complex n1, struct Complex n2);


int main()
{
    printf("For 1st complex numper\nEnter real and imaginary respectivly : ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &num1.real, &num1.imag);
    printf("For 2st complex numper\nEnter real and imaginary respectivly : ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &num2.real, &num2.imag);
    sum (num1, num2);
    return 0;
}

void sum (struct Complex n1 , struct Complex n2)
{
    //sum real to real and imag to imag
    float Rresult = n1.real + n2.real;
    float Iresult = n1.imag + n2.imag;
    // printing the result of summtion 
    printf("Sum = %.1f+%.01fi", Rresult,Iresult);

}
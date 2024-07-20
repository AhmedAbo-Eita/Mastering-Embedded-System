#include "stdio.h"

int main()
{
    printf("Expected Output :\n");
    int m = 29;
    printf("Adress of m : %p \nVlaue of m: %d\n", &m, m);
    int *ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Adress of pointer ab : %p \nVlaue of pointer ab: %d\n", ab, *ab);
    m = 34;
    printf("The value of m assigned to 34 now.\n");
    printf("Adress of pointer ab : %p \nVlaue of pointer ab: %d\n", ab, *ab);
    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Adress of m : %p \nVlaue of pointer m: %d\n", &m, m);

    return 0;
}
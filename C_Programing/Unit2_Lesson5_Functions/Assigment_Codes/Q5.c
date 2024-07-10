#include <stdio.h>
int reset(int num1,int position1);

int main()
{
    int num,position;
    printf("Enter the input number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);

    printf("Enter bit position: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &position);

    printf("Result --> %d",reset(num,position));
    return 0;
}

int reset(int num1,int position1)
{
    num1 &= ~(1<<position1);
    return num1;
}

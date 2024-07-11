#include <stdio.h>
int countOnes(int num);
int main()
{
    int input;
    printf("Enter the number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &input);
    printf("Result: %d", countOnes(input));
    return 0;
}
int countOnes(int num)
{
    int count = 0;
    while (num != 0) {
        count = count + (num & 1);  
        num = num >> 1;         
    }
    return count;
}

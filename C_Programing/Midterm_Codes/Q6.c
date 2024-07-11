#include <stdio.h>
int unique_number(int size1);
int main()
{
    int size;
    printf("Enter the size of array: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &size);
    printf("The unique number is: %d", unique_number(size));
    return 0;
}
int unique_number(int size1)
{
    int arr[size1],i,unique = 0;
    for(i=0;i<size1;i++)
    {
        printf("Enter the element number %d: ", i+1);
        fflush(stdin); fflush(stdout);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size1; i++) {
        unique ^= arr[i];
    }
    return unique;
}

#include <stdio.h>

int main()
{
    int size =0, counter=0;
    printf("Input the number of elements to store in array (max 15): ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &size);
    int num[size];
    int *ptr = num;
    ptr = ptr+size-1;
    printf("Input %d number of elements in the array :\n", size);
    for (counter=0;counter<size;counter++)
    {
        printf("element - %d : ", counter+1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &num[counter]);
    }
    printf("The elements of array in reverse order are :\n");
    for (counter = size ; counter > 0 ; counter --)
    {
        printf("element - %d : %d\n", counter, *ptr);
        ptr--;
    }


    return 0;
}
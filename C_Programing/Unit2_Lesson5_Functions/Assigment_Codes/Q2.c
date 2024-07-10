#include <stdio.h>

int main()
{
    int size1,size2, size,i;
    printf("Enter the size of array 1: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &size1);

    printf("Enter the size of array 2: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &size2);

    if(size1 > size2)
    {
        size = size1;
    }
    else
    {
        size = size2;
    }
  
    int arr1[size],arr2[size],temp;

    for(i=0;i<size1;i++)
    {
        printf("Enter the element %d of array A: ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &arr1[i]);
    }

    for(i=0;i<size2;i++)
    {
        printf("Enter the element %d of array B: ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &arr2[i]);
    }

    for(i=0;i<size;i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("Array A = ");
    for(i=0;i<size2;i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("Array B = ");
    for(i=0;i<size1;i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}


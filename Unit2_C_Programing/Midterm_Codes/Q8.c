#include <stdio.h>
void reverse(int size1);

int main()
{
    int size;
    printf("Enter the size of array: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &size);
    reverse(size);
    
    return 0;
}

void reverse(int size1)
{
    int arr1[size1],i;
    for(i=0;i<size1;i++)
    {
        printf("Enter the number %d of array: ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &arr1[i]);
    }

    printf("Reversed array: ");

    for(i=size1-1;i>=0;i--)
    {
        printf("%d  ", arr1[i]);

    }

}

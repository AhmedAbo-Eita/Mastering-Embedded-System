#include <stdio.h>
#include <math.h>
int ReversDigits(int num);
int main()
{
    int input;
    printf("Enter the number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &input);
    printf("%d", ReversDigits(input));
    return 0;
}
int ReversDigits(int num)
{
    int result = 0;
    while (num != 0) {
        result = result * 10 + num % 10;
        num = num / 10;
    }

    /*int arr[50],i=0,j,result = 0,Ndigets;
    
    while(num%10 || num>0)
    {
        arr[i] = num%10;
        num = num/10;
        i++;
    }
    Ndigets = i-1 ;

    for(j=0; j<i ; j++)
    {
        result = result + arr[j]* pow(10,(Ndigets));
        Ndigets--;
    }*/
     
    return result;
   

}
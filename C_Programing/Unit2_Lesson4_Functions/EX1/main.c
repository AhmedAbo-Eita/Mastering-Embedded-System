#include<stdio.h>
#include <stdbool.h>
bool prime_number(int num1);
int main()
{
    //take two numbers from user
    int in1,in2;
    printf("Enter two numbers (intervals): ");
    fflush(stdin);fflush(stdout);
    scanf("%d %d", &in1, &in2);
    printf("Prime numbers between %d and %d are: ", in1 , in2);
    int i = in1;
    // loop on the values between two numbers add call the fun that check if the num is prim or not
    for(i; i>=in1 && i<=in2; i++)
    {
        if( prime_number(i))
        {
            printf("%d ", i);
        }
    }
   
    //system("pause");
    return 0;
}
bool prime_number(int num1)
{
    //eleminate the negative numbers and zero
    if(num1<= 0)
    {
        return false;
    }

    // check if the number is prime number of not
    int counter =2; // 
    for(counter; counter*counter<=num1 ; counter++)
    {
        if(num1%counter == 0)
        {
            return false;
        } 
    }
 return true;

}
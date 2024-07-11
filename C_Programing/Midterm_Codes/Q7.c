#include <stdio.h>
int sum(int num);
int main()
{
    printf("Sum numbers from 1 to 100 = %d", sum(100));
    return 0; 
}
int sum(int num)
{
    int result=num;
    if(result>0)
    {
    
        result = result + sum(num-1);
    }
    return result;
}
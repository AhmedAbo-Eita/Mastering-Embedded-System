#include <stdio.h>
//define constant pi 
#define pi 3.14
// Macro calculte the area
#define AreaOfCircule(r) pi*(r)*(r) 
int main()
{
    float radius= 0, Area;
    //Take input from user
    printf("Enter the radius: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &radius);

    // calculate area
    Area = AreaOfCircule(radius);
    //print result
    printf("Area=%.02f ", Area);
    return 0;
}
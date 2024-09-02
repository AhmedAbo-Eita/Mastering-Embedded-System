#include <stdio.h>
#include <string.h>
struct students
{
    char name[100];
    int roll;
    float marks;
}s1;

int main()
{
    printf("Enter the information of student\n");

    //Enter student name
    printf("Enter Name: ");
    fflush(stdin);fflush(stdout);
    gets(s1.name);

    //Enter student roll 
    printf("Enter roll number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &s1.roll);

    //Enter student markes
    printf("Enter roll marks: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &s1.marks);

    printf("Displaying Indormations \nname: %s\nRoll: %d\nMarks: %.2f", s1.name, s1.roll, s1.marks);

    return 0;
}
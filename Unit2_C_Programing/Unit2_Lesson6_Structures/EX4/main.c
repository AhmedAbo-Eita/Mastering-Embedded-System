#include <stdio.h>
#include <string.h>
//User define data strucuter contains studens info
struct SdataBase 
{
    char name[20];
    float marks;
}students[10];
int NumOfStudents = 10;
int main()
{
    int counter = 0;
    //Fill database with students informations
    for (counter=0;counter<NumOfStudents;counter++)
    {
        printf("For roll number %d\n", counter+1);
        fflush(stdin);fflush(stdout);
        printf("Enter name: ");
        fflush(stdin);fflush(stdout);
        gets(students[counter].name);
        printf("Enter marks: ");
        fflush(stdin);fflush(stdout);
        scanf("%f", &students[counter].marks);
    }
    // print database
    printf("Displaying informations of students: \n");

    for (counter=0;counter<NumOfStudents;counter++)
    {
        printf("Information for roll number %d\nName: %s\nMarks: %.02f\n", counter+1, students[counter].name, students[counter].marks);

    }

    return 0;
}
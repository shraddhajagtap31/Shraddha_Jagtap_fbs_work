#include <stdio.h>

int checkgrade();
void main()
{
    int grade;
    grade = checkgrade();
    if(grade == 1)
        printf("Distinction");
    else if(grade == 2)
        printf("First Class");
    else if(grade == 3)
        printf("Second Class");
    else if(grade == 4)
        printf("Pass Class");
    else
        printf("Fail");
}
int checkgrade()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks > 75)
        return 1;
    else if(marks > 65)
        return 2;
    else if(marks > 55)
        return 3;
    else if(marks >= 40)
        return 4;
    else
        return 5;
}
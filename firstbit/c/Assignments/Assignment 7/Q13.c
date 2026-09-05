#include <stdio.h>

void checkgrade(int *);
void main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    checkgrade(&marks);
}

void checkgrade(int *m)
{
    if(*m> 75)
        printf("Distinction");
    else if(*m > 65)
        printf("First Class");
    else if(*m > 55)
        printf("Second Class");
    else if(*m >= 40)
        printf("Pass Class");
    else
        printf("Fail");
}
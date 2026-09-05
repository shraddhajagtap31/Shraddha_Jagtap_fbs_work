#include <stdio.h>

void checkage(int *);
void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    checkage(&age);
}

void checkage(int *x)
{
    if(*x < 12)
        printf("Child");
    else if(*x <= 19)
        printf("Teenager");
    else if(*x <= 59)
        printf("Adult");
    else
        printf("Senior");
}
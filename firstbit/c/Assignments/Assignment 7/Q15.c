#include <stdio.h>

void check(int*);
void main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    check(&number);
}

void check(int *a)
{
    if(*a % 3 == 0 && *a % 5 == 0)
        printf("Divisible by both");
    else if(*a % 3 == 0)
        printf("Divisible by 3 but not by 5");
    else if(*a % 5 == 0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}
#include <stdio.h>

void check(int number);
void main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    check(number);
}

void check(int number)
{
    if(number % 3 == 0 && number % 5 == 0)
        printf("Divisible by both");
    else if(number % 3 == 0)
        printf("Divisible by 3 but not by 5");
    else if(number % 5 == 0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}
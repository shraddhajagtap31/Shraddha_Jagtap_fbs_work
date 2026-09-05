#include <stdio.h>

int Isdivisible();

void main()
{
    int result;

    result = Isdivisible();

    if(result == 1)
        printf("Divisible by both");
    else if(result == 2)
        printf("Divisible by 3 only");
    else if(result == 3)
        printf("Divisible by 5 only");
    else
        printf("Divisible by None");
}
int Isdivisible()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);
    if(number % 3 == 0 && number % 5 == 0)
        return 1;
    else if(number % 3 == 0)
        return 2;
    else if(number % 5 == 0)
        return 3;
    else
        return 4;
}
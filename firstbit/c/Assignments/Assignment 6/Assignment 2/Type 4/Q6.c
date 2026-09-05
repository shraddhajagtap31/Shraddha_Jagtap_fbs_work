#include <stdio.h>

int check(int number);
void main()
{
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);
    result = check(number);
    if(result == 1)
        printf("Divisible by both");
    else if(result == 2)
        printf("Divisible by 3");
    else if(result == 3)
        printf("Divisible by 5 ");
    else
        printf("Divisible by None");
}
int check(int number)
{
    if(number % 3 == 0 && number % 5 == 0)
        return 1;
    else if(number % 3 == 0)
        return 2;
    else if(number % 5 == 0)
        return 3;
    else
        return 4;
}
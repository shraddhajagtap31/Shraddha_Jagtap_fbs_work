#include <stdio.h>

int evenodd(int);
void main()
{
    int number;
    int result;
    printf("Enter the number: ");
    scanf("%d", &number);
    result = evenodd(number);

    if(result == 1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int evenodd(int number)
{
    if(number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
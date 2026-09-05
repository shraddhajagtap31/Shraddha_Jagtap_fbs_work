#include <stdio.h>

int evenodd();
void main()
{
    int result;
    result = evenodd();
    if(result == 1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int evenodd()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
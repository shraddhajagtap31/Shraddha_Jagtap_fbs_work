#include <stdio.h>

int sumFirstLast();

void main()
{
    int result;
    result = sumFirstLast();
    printf("Sum = %d", result);
}

int sumFirstLast()
{
    int n, first, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;
    return first + last;
}
#include <stdio.h>

void main()
{
    int number, temp, first, last, sum;
    printf("Enter a number: ");
    scanf("%d", &number);
    last = number % 10;
    temp = number;
    while(temp >= 10)
    {
        temp = temp / 10;
    }
    first = temp;
    sum = first + last;
    printf("Sum = %d", sum);
}
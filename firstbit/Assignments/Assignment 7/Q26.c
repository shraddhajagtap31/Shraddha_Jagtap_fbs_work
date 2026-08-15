#include <stdio.h>

void sum(int *);
void  main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    sum(&number);
}

void sum(int *a)
{
    int temp = *a;
    int first;
    int last;
    int sum;
    last = temp % 10;
    while(temp >= 10)
    {
        temp = temp / 10;
    }
    first = temp;
    sum = first + last;
    printf("Sum of first and last digit = %d", sum);
}
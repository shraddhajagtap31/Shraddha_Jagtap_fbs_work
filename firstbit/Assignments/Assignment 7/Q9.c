#include <stdio.h>

void test(int *);
void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    test(&number);
}

void test(int *temp)
{
    int a = *temp;
    if(a % 3 == 0 && a % 5 == 0)
    {
        printf("Divisible by both");
    }
    else if(a % 3 == 0)
    {
        printf("Number divisible by 3");
    }
    else if(a % 5 == 0)
    {
        printf("Number divisible by 5");
    }
    else
    {
        printf("Divisible by none");
    }
}
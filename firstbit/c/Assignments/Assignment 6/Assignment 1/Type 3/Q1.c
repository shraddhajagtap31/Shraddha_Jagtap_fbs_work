#include <stdio.h>

void evenodd(int n);
void main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    evenodd(number);
}
void evenodd(int n)
{
    if(n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
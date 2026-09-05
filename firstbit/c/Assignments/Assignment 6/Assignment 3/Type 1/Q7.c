#include <stdio.h>

void factorial();

void main()
{
    factorial();
}
void factorial()
{
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d", fact);
}
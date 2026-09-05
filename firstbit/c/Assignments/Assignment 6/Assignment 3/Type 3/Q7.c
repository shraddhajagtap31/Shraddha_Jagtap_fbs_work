#include <stdio.h>

void factorial(int n);

void main()
{
    factorial(5);
}
void factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}
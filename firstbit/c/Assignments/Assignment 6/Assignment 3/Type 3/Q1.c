#include <stdio.h>

void printNumbers(int n);

void main()
{
    printNumbers(10);
}
void printNumbers(int n)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
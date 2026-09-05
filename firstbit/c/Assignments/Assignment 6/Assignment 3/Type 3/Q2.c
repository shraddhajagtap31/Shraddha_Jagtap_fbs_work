#include <stdio.h>

void printTable(int n);

void main()
{
    printTable(3);
}
void printTable(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }
}
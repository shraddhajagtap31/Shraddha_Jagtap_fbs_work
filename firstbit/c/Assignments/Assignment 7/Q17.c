#include <stdio.h>

void print(int *);

void main()
{
    int n = 10;

    print(&n);
}
void print(int *x)
{
    int i;

    for(i = 1; i <= *x; i++)
    {
        printf("%d ", i);
    }
}
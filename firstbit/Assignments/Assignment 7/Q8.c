#include <stdio.h>

void main()
{
    int a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    average(&a, &b, &c, &d, &e);
}

void average(int *a, int *b, int *c, int *d, int *e)
{
    int x = *a;
    int y = *b;
    int z = *c;
    int w = *d;
    int f = *e;
    int avg = (x + y + z + w + f) / 5;
    printf("The average is %d", avg);
}

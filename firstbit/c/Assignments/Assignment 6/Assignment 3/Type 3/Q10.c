#include <stdio.h>

void sumFirstLast(int n);

void main()
{
    sumFirstLast(12345);
}
void sumFirstLast(int n)
{
    int first, last, sum;
    last = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;
    sum = first + last;
    printf("%d", sum);
}
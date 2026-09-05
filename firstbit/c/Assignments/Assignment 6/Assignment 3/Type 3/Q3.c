#include <stdio.h>

void sumRange(int start, int end);

void main()
{
    sumRange(1, 5);
}
void sumRange(int start, int end)
{
    int i, sum = 0;

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);
}
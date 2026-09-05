#include <stdio.h>

void sum();

void main()
{
    sum();
}
void sum()
{
    int start, end, i, total = 0;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        total = total + i;
    }
    printf("Sum = %d", total);
}
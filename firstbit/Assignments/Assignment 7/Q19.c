#include <stdio.h>

void sum(int *starting, int *end);
void main()
{
    int starting, end;
    printf("Enter starting: ");
    scanf("%d", &starting);
    printf("Enter end: ");
    scanf("%d", &end);
    sum(&starting, &end);
}
void sum(int *starting, int *end)
{
    int i;
    int total = 0;
    for(i = *starting; i <= *end; i++)
    {
        total = total + i;
    }
    printf("Sum = %d", total);
}
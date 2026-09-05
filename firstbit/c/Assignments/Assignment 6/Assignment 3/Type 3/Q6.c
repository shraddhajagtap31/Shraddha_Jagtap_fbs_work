#include <stdio.h>

void checkPerfect(int n);

void main()
{
    checkPerfect(28);
}
void checkPerfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        printf("Perfect");
    }
    else
    {
        printf("Not Perfect");
    }
}
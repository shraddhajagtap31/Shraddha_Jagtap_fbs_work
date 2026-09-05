#include <stdio.h>

void strong();

void main()
{
    strong();
}

void strong()
{
    int n, i, temp, rem, j, fact, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;
        while(temp > 0)
        {
            rem = temp % 10;
            fact = 1;
            for(j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }
            sum = sum + fact;
            temp = temp / 10;
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}
#include <stdio.h>

void main()
{
    int n, i, number, digit;
    int sum, fact, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        number = i;
        sum = 0;
        while(number > 0)
        {
            digit = number % 10;
            fact = 1;
            for(j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }
            sum = sum + fact;
            number = number / 10;
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}
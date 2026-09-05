#include <stdio.h>

int strong();
void main()
{
    int result;

    result = strong();

    if(result == 1)
    {
        printf("Strong");
    }
    else
    {
        printf("Not Strong");
    }
}
int strong()
{
    int n, temp, rem, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
        rem = n % 10;
        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
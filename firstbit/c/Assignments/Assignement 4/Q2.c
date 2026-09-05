#include <stdio.h>

void main()
{
    int n, number, i, flag;
    printf("Enter n: ");
    scanf("%d", &n);
    for(number = 2; number <= n; number++)
    {
        flag = 0;

        for(i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ", number);
        }
    }
}
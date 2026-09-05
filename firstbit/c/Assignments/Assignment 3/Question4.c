#include <stdio.h>

void main()
{
    int n, i = 2, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime Number");
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
            i++;
        }

        if (flag == 1)
            printf("Prime Number");
        else
            printf("Not Prime Number");
    }
}
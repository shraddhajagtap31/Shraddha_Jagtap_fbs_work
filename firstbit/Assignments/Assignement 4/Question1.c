#include <stdio.h>

void main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        int temp = i;
        int rem;
        int sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }
}
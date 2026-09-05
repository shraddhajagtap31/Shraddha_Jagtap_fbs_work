#include <stdio.h>

void prime();

void main()
{
    prime();
}
void prime()
{
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
#include <stdio.h>

void prime();

void main()
{
    prime();
}
void prime()
{
    int n, i, j, flag;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        flag = 1;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d ", i);
        }
    }
}
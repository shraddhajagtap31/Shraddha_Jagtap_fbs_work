#include <stdio.h>

int perfect();
void main()
{
    int result;
    result = perfect();
    if(result == 1)
    {
        printf("Perfect");
    }
    else
    {
        printf("Not Perfect");
    }
}
int perfect()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
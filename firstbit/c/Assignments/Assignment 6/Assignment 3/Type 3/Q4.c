#include <stdio.h>

void checkPrime(int n);

void main()
{
    checkPrime(7);
}
void checkPrime(int n)
{
    int i, flag = 1;

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
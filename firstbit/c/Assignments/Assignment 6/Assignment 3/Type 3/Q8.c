#include <stdio.h>

void checkStrong(int n);

void main()
{
    checkStrong(145);
}
void checkStrong(int n)
{
    int temp, rem, i, fact, sum = 0;
    temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum == n)
    {
        printf("Strong");
    }
    else
    {
        printf("Not Strong");
    }
}
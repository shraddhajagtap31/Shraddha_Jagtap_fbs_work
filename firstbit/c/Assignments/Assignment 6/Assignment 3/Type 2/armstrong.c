#include <stdio.h>

int armstrong();
void main()
{
    int result;
    result = armstrong();
    if(result == 1)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}
int armstrong()
{
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
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
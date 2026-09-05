#include <stdio.h>

void checkArmstrong(int n);

void main()
{
    checkArmstrong(153);
}
void checkArmstrong(int n)
{
    int temp, rem, sum = 0;
    temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}
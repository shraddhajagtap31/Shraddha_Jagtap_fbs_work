#include <stdio.h>

void armstrong(int *n);
void  main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(&n);
}

void armstrong(int *n)
{
    int temp;
    int digit;
    int sum = 0;
    temp = *n;
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }
    if(sum == *n)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
}
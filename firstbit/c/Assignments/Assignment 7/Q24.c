#include <stdio.h>

void strong(int *);
void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    strong(&number);
}
void strong(int *a)
{
    int temp = *a;
    int digit;
    int i;
    int fact;
    int sum = 0;
    while(temp != 0)
    {
        digit = temp % 10;
        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum == *a)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a Strong number");
    }
}
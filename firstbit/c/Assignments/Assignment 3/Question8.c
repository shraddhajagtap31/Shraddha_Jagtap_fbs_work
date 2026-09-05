#include <stdio.h>

void main()
{
    int number, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;
    while(temp > 0)
    {
        rem = temp % 10;
        int fact = 1;
        int i = 1;
        while(i <= rem)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == number)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}
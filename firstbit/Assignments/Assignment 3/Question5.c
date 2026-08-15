#include <stdio.h>

void main()
{
    int number, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number; 
    while (temp > 0)
    {
        rem = temp % 10;                 
        sum = sum + (rem * rem * rem);  
        temp = temp / 10;                 
    }
    if (sum == number)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
}
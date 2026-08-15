#include <stdio.h>

void main()
{
    int number, temp, rem, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;
    while(temp > 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }
    if(reverse == number)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}
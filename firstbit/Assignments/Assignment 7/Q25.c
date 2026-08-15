#include <stdio.h>

void palindrome(int *);

void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    palindrome(&number);
}

void palindrome(int *a)
{
    int temp = *a;
    int digit;
    int reverse = 0;
    while(temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    if(reverse == *a)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
}
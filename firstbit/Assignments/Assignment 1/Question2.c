#include <stdio.h>

void main()
{
    int num, original;
    int first, second, third, reverse;

    printf("Enter the number: ");
    scanf("%d", &num);

    original = num;

    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;

    reverse = third * 100 + second * 10 + first;

    if (original == reverse)
    {
        printf(" The number is a palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
}
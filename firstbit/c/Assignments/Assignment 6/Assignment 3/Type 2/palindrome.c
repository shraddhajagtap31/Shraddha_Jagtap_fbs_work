#include <stdio.h>

int palindrome();

void main()
{
    int result;
    result = palindrome();
    if(result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
int palindrome()
{
    int n, temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(rev == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
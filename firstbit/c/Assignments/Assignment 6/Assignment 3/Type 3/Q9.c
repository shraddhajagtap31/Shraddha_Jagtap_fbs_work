#include <stdio.h>

void checkPalindrome(int n);

void main()
{
    checkPalindrome(121);
}
void checkPalindrome(int n)
{
    int temp, rem, rev = 0;
    temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(rev == n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
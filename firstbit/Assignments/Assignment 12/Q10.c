#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(rev, str);

    strrev(rev);

    if(strcmp(str, rev) == 0)
    {
        printf("Is Palindrome");
    }
    else
    {
        printf(" Not Palindrome");
    }
}
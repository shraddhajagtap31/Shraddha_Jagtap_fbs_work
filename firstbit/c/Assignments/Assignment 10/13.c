#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    printf("Enter a string: ");
    scanf(" %s", str);

    if(strpbrk(str, "aeiou") != NULL)
    {
        printf("Vowel found");
    }
    else
    {
        printf("No vowel found");
    }
}
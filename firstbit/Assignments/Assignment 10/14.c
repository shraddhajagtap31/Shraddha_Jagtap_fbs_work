#include <stdio.h>
#include <string.h>

void  main()
{
    char str1[10];
    char str2[14];
    printf("Enter first string: ");
    scanf(" %s", str1);
    printf("Enter second string: ");
    scanf(" %s", str2);
    if(strcoll(str1, str2) == 0)
    {
        printf("Strings are same");
    }
    else
    {
        printf("Strings are different");
    }

}
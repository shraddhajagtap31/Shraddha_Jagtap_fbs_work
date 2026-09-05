#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20];
    char str2[10];
    printf("Enter first string: ");
    scanf(" %s", str1);
    printf("Enter second string: ");
    scanf(" %s", str2);
    if(memcmp(str1, str2, strlen(str1)) == 0)
    {
        printf("Memory blocks are same");
    }
    else
    {
        printf("Memory blocks are different");
    }
}
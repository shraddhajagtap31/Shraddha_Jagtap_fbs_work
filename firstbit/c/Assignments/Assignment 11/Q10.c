#include <stdio.h>

void mystrcasecmp(char str1[], char str2[]);

void main()
{
    char str1[20], str2[20];
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    mystrcasecmp(str1, str2);
}

void mystrcasecmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i] + 32;
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] = str2[i] + 32;
        if (str1[i] != str2[i])
        {
            printf("Strings are different");
            return;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are same");
    else
        printf("Strings are different");
}
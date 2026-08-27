#include <stdio.h>

void mystrstr(char str1[], char str2[]);

void main()
{
    char str1[50], str2[20];
    printf("Enter main string: ");
    scanf("%s", str1);
    printf("Enter string to search: ");
    scanf("%s", str2);
    mystrstr(str1, str2);
}
void mystrstr(char str1[], char str2[])
{
    int i, j;
    for (i = 0; str1[i] != '\0'; i++)
    {
        j = 0;
        while (str2[j] != '\0' && str1[i + j] == str2[j])
        {
            j++;
        }
        if (str2[j] == '\0')
        {
            printf("String found");
            return;
        }
    }
    printf("String not found");
}
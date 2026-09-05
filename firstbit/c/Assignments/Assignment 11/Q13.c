#include <stdio.h>

void mystrncmp(char str1[], char str2[], int n);

void main()
{
    char str1[20], str2[20];
    int n;
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    printf("Enter number of characters: ");
    scanf("%d", &n);
    mystrncmp(str1, str2, n);
}

void mystrncmp(char str1[], char str2[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are different");
            return;
        }
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }
    printf("First %d characters are same", n);
}
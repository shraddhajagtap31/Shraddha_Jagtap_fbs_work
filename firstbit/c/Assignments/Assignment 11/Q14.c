#include <stdio.h>

void mystrnstr(char str1[], char str2[], int n);
void main()
{
    char str1[50], str2[20];
    int n;
    printf("Enter main string: ");
    scanf("%s", str1);
    printf("Enter string to search: ");
    scanf("%s", str2);
    printf("Enter limit: ");
    scanf("%d", &n);
    mystrnstr(str1, str2, n);
}
void mystrnstr(char str1[], char str2[], int n)
{
    int i, j;
    for (i = 0; i < n && str1[i] != '\0'; i++)
    {
        j = 0;
        while (str2[j] != '\0' &&
               i + j < n &&
               str1[i + j] == str2[j])
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
#include <stdio.h>

void mystrncasecmp(char str1[], char str2[], int n);
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
    mystrncasecmp(str1, str2, n);
}
void mystrncasecmp(char str1[], char str2[], int n)
{
    int i = 0;
    char ch1, ch2;
    while (i < n)
    {
        ch1 = str1[i];
        ch2 = str2[i];
        if (ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;
        if (ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;
        if (ch1 != ch2)
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
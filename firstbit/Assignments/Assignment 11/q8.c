#include <stdio.h>

void mystrrev(char str[]);
void main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);
    mystrrev(str);
    printf("Reverse string: %s", str);
}
void mystrrev(char str[])
{
    int i = 0;
    int j;
    char temp;
    while (str[i] != '\0')
    {
        i++;
    }
    j = i - 1;
    i = 0;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
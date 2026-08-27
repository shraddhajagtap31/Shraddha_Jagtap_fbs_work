#include <stdio.h>

void main()
{
    char str[100];
    char temp;
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[length] != '\0')
    {
        length++;
    }

    temp = str[0];
    str[0] = str[length - 1];
    str[length - 1] = temp;

    printf("New string: %s", str);
}
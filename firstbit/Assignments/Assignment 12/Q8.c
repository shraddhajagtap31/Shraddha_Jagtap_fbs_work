#include <stdio.h>

void main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    count++;

    printf("Number of words = %d", count);
}
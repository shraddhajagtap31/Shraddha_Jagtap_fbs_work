#include <stdio.h>

int lettercase();

void main()
{
    int result;
    result = lettercase();
    if(result == 1)
        printf("Uppercase");
    else
        printf("Lowercase");
}

int lettercase()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
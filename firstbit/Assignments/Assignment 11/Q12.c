#include <stdio.h>

void mystrrchr(char str[], char ch);
void main()
{
    char str[20], ch;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter character: ");
    scanf(" %c", &ch);
    mystrrchr(str, ch);
}
void mystrrchr(char str[], char ch)
{
    int i = 0;
    int position = -1;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            position = i;
        }
        i++;
    }
    if (position != -1)
        printf("Last occurrence at index %d", position);
    else
        printf("Character not found");
}
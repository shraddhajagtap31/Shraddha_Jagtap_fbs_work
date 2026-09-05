#include <stdio.h>

void mystrchr(char str[], char ch);
int main()
{
    char str[20], ch;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter character: ");
    scanf(" %c", &ch);
    mystrchr(str, ch);
}
void mystrchr(char str[], char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            printf("Character found at index %d", i);
            return;
        }
        i++;
    }
    printf("Character not found");
}
#include <stdio.h>

int main()
{
    char str[50];
    char ch;
    int i = 0, flag = 0;

    printf("Enter a string: ");
//    scanf(" %[^\n]", str);
    fgets(str, 50, stdin);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(str[i] == '\0')
                break;
        }
        else
        {
            if(str[i] == ch)
            {
                flag = 1;
                break;
            }
        }

        i++;
    }
    if(flag == 1)
        printf("Character found");
    else
        printf("Character not found");

}
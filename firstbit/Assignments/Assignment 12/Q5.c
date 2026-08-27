#include <stdio.h>

void main()
{
    char str[30];
    int i = 0;
    int count = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(str[i] == '\0')
            {
                break;
            }
        }
        else
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
               str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
               str[i] == 'O' || str[i] == 'U')
            {
                count++;
            }
        }

        i++;
    }

    printf("Number of vowels : %d", count);
}
#include <stdio.h>

int Isuppercase(char);
void main()
{
    char ch;
    int res;
    printf("Enter the character: ");
    scanf("%c", &ch);
    res = Isuppercase(ch);
    if(res == 1)
        printf("Uppercase");
    else
        printf("Lowercase");
}
int Isuppercase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
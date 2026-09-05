#include <stdio.h>

int Isvowel();
void main()
{
    int result;
    result = Isvowel();
    if(result == 1)
        printf("Vowel");
    else
        printf("Consonant");
}

int Isvowel()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
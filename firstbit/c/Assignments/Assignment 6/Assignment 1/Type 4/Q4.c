#include <stdio.h>

int Isvowel(char);
void main()
{
    char ch;
    int res;
    printf("Enter the character: ");
    scanf("%c", &ch);
    res = Isvowel(ch);
    if(res == 1)
        printf("It is a vowel");
    else
        printf("It is a consonant");
}
int Isvowel(char ch)
{
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
#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("Length = %d", strspn(str, "shradda"));  //for finding length of intitial matching characte
}
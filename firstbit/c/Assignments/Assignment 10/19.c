#include <stdio.h>
#include <string.h>

void main()
{
    char str1[30];
    char str2[60];
    printf("Enter a string: ");
    scanf(" %[^\n]", str1);
    strxfrm(str2, str1, 50);
    printf("Transformed string = %s", str2);

}
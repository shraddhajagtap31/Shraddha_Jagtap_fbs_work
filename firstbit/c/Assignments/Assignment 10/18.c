#include <stdio.h>
#include <string.h>

void main()
{
    char str1[40];
    char str2[50];
    printf("Enter a string: ");
    scanf(" %s", str1);
    memcpy(str2, str1, strlen(str1) + 1);
    printf("Copied string = %s", str2);

}
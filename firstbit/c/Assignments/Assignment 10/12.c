#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("Length = %d", strcspn(str, " "));  //for finding the length of matching chRACTERS

}
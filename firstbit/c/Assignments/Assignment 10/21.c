#include <stdio.h>

void main()
{
    char str[20];
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    printf("String = %s", str);

}
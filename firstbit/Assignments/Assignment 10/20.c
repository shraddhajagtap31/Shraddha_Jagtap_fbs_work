#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "Shraddha";
    memset(str, '*', 8);
    str[8] = '\0';
    printf("String = %s", str);

}
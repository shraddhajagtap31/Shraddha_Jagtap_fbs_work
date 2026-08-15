#include <stdio.h>
#include <string.h>

void main()
{
    char str[10] = "Firstbit";
    memmove(str + 2, str, 3);
    printf("String = %s", str);

}
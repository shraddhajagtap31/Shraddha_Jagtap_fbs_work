#include <stdio.h>
#include <string.h>

void main(){
	char str1[10];
	char str2[10];
	printf("Enter the string1 : ");
	scanf("%s",str1);
	printf("Enter the string2 : ");
	scanf("%s",str2);
	mystrcmp(str1,str2);
}
void mystrcmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are different");
            return;
        }

        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are same");
    else
        printf("Strings are different");
}
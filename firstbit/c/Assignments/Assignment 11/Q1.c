#include <stdio.h>
#include <string.h>

void main(){
	char str1[10];
	char str2[10];
	printf("Enter the string : ");
	scanf("%s",str1);
	mystrcpy(str2,str1);
	printf("\nCopied string : %s",str2);
}
void mystrcpy(char destination[],char source[]){
	int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
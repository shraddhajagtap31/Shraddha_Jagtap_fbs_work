#include <stdio.h>
#include <string.h>

void main(){
	char str1[10];
	char str2[10];
	printf("Enter the string : ");
	scanf("%s",str1);
	mystrncpy(str2,str1,3);
	printf("\nCopied string : %s",str2);
}
void mystrncpy(char dest[],char src[],int n){
	int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}
	
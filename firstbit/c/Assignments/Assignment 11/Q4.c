#include <stdio.h>
#include <string.h>

void main(){
	char str1[10];
	char str2[10];
	printf("Enter the string1 : ");
	scanf("%s",str1);
	printf("Enter the string2 : ");
	scanf("%s",str2);
	mystrcat(str1,str2);	
    printf("Concatenated string: %s", str1);
}
void mystrcat(char str1[],char str2[]){
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

#include <stdio.h>
#include <string.h>

void main(){
	char str1[10];
	printf("Enter the string : ");
	scanf("%s",str1);
	mystrlen(str1);
	printf("Length of string is : %d",mystrlen(str1));
}
int mystrlen(char str[]){
	int i=0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}
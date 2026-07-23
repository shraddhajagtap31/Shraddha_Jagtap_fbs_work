#include <stdio.h>

void main(){
	char ch;
	printf("Enter the character :");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z'){
		printf("The character is a uppercase");
	}
	else{
		printf("The character is lowercase");
	}
}
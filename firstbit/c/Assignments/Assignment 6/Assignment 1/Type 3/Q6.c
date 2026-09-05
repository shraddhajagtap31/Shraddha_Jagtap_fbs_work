#include <stdio.h>

void Isuppercase(char);
void main(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	Isuppercase(ch);
}
void Isuppercase(char ch){
	if(ch  >='A' && ch<='Z'){
		printf("Uppercase");
	}
	else{
		printf("Lowercase ");
	}
}
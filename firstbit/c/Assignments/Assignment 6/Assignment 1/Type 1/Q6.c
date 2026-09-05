#include <stdio.h>

void Isuppercase();
void main(){
	Isuppercase();
}
void Isuppercase(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if(ch  >='A' && ch<='Z'){
		printf("Uppercase");
	}
	else{
		printf("Lowercase ");
	}
}
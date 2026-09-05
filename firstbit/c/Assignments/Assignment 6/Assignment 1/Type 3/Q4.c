#include <stdio.h>

void Isvowel(char);
void main(){
	char ch;
	printf("Enter the character :");
	scanf("%c",&ch);
	Isvowel(ch);
}
void Isvowel(char ch ){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("It is a vowel");
	}
	else{
		printf("It is a consonant");
	}
}
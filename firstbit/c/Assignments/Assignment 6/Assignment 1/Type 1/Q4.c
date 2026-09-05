#include <stdio.h>

void Isvowel();
void main(){
	Isvowel();
}
void Isvowel(){
	char ch;
	printf("Enter the charcter of ur choice : ");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'{
		printf("It is a vowel");
	}
	else{
		printf("It is a consonant");
	}
}
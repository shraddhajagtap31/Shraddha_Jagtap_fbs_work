#include <stdio.h>

void Isvowel(char* ch);
void main(){
	char ch;
	printf("Enter the character of ur choice : ");
	scanf("%char",&ch);
	Isvowel(&ch);
}
void Isvowel(char *x){
	char a = *x;
	if(a == 'a'|| a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' ){
		printf("Vowel");
	}
	else{
		printf("Consonant");
	}
}
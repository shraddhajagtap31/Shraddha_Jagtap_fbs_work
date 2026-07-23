#include <stdio.h>

void main(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){	
	printf("This is a vowel");
		}
    else{
    	printf("This is a consonant");
	}
}
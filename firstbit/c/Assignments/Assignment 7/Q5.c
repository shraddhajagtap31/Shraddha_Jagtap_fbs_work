#include <stdio.h>

void Isuppercase(char* ch);
void main(){
	char ch;
	printf("Enter the alphabet : ");
	scanf("%c",&ch);
	IsUppercase(&ch);
}
void IsUppercase(int * a){
	char x = *a;
	if(x>='A' && x<='Z'){
		printf("Uppercase");
	}
	else
	{
		printf("lowercase");
	}
}
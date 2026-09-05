#include <stdio.h>

void Iseligible();
void main(){
	Iseligible();
}
void Iseligible(){
	int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	if(age>18){
		printf("Elgible");
	}
	else{
		printf("Not Eligible");
	}	
	}
		
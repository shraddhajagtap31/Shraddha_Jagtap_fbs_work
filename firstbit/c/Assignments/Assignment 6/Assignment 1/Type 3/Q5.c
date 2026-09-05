#include <stdio.h>

void Iseligible(int);
void main(){
	int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	Iseligible(age);
}
void Iseligible(int age){
	if(age>18){
		printf("Elgible");
	}
	else{
		printf("Not Eligible");
	}	
	}
		
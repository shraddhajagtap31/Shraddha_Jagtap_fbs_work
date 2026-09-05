#include <stdio.h>

void main(){
	agegroup();
}
void agegroup(){
	int age;
	printf("Enter the age of ur choice : ");
	scanf("%d",&age);
	if(age<12){
		printf("child");
	}
	else if(age>12 && age<19){
		printf("Teenager");
	}
	else if(age>20 && age <59){
		printf("Adult");
	}
	else if(age>60)
	  printf("Senior");
	else
	  printf("Invalid");
}
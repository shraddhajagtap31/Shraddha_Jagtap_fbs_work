#include <stdio.h>

void checkgrade();
void main(){
	checkgrade();
}
void checkgrade(){
	int marks;
	printf("Enter ur marks t check the grade : ");
	scanf("%d",&marks);
	if(marks>75){
		printf("Distinction");
	}
	else if(marks>65){
		printf("First Class");
	}
	else if(marks>55){
		printf("Second class");
	}
	else if(marks>=40){
    	printf("Pass");
    }
    else{
    	printf("Fail");
	}

}
#include <stdio.h>
void main(){
	int year = 1900;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		printf("The year is a leap year");
	}
	else{
		printf("The year is not a leap year");
	}
}
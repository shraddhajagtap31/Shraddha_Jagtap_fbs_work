#include <stdio.h>

void main(){
	int year;
	printf("enter the year of ur choice : ");
	scanf("%d",&year);
	leapyear(&year);
	}
void leapyear(int *a){
	int dummy =*a;
	if(dummy%4==0 && dummy%100!=0 || dummy%400==0){
		printf("Leap year");
	}
	else{
		printf("Not a leap year");
	}
}
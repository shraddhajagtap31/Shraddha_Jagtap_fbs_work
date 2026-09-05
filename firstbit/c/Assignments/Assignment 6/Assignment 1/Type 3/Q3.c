#include<stdio.h>

void leapyear(int);
void main(){
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	leapyear(year);
}
void leapyear(int year){
	if(year%4==0 && year%100!=0||year%400==0){
		printf("The year is a leap year ");
	}
	else{
		printf("The year is not a leap year");
	}
}
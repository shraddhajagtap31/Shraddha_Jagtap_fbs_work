#include <stdio.h>

int leapyear();
void main()
{
    int result;
    result = leapyear();
    if(result == 1)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }
}
int leapyear(){
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0||year%400==0){
	   return 1 ;
	}
	else{
		return 0;
	}
}
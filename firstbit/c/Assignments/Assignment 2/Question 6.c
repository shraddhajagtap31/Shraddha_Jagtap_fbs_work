#include <stdio.h>

void main(){
	int number;
	printf("Enter the number of ur choice: ");
	scanf("%d",&number);
	if( number % 3 == 0 && number % 5 == 0)
	   printf("The number is divisble by both");
	   
	else if(number % 3 == 0 && number % 5 !=0){
		printf("The number is divisble by 3 only");
	}
	else if( number % 5 == 0 && number % 3 != 0){
		printf("The number is divisble by 5");
	}
	else{
		printf("Divisble by none");
	}
}
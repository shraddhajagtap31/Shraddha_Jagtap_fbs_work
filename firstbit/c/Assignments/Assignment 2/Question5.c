#include <stdio.h>

void main(){
	int price,Topay;
	printf("Enter the total price : ");
	scanf("%d",&price);
	char student;
	printf("Are uhhh a student: y/n : ");
	scanf(" %c",&student);
	if (student == 'y'){
		if(price > 500){
			Topay =price -( 0.20 * price);
		}
		else{
			Topay = price -(0.10 * price);
		}
	}
	else{
		if(price >600){
			Topay = price - (0.15 * price);
		}
		else{
			Topay = price;
		}
	}
	printf("Amount to pay = %d", Topay);
	
}
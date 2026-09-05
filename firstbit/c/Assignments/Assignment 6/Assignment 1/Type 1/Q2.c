#include <stdio.h>

void Ispalindrome();
void main(){
	Ispalindrome();
}
void Ispalindrome(){
	int number,rem,sum=0;
	printf("Enter the number of ur choice : ");
	scanf("%d",&number);
	int temp = number;
	while(temp >0){
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(number == sum ){
		printf("Is palindrome");
	}
	else{
		printf("Not a Palindrome");
	}
}
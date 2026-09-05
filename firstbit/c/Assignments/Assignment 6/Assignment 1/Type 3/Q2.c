#include <stdio.h>

void Ispalindrome(int);
void main(){
	int number;
	printf("Enter the number of ur choice : ");
	scanf("%d",&number);
	Ispalindrome(number);
}//mains end
void Ispalindrome(int number){
	int rem,sum=0;
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

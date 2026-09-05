#include <stdio.h>

int Ispalindrome();
void main(){
	 int result;
	 result = Ispalindrome();
	 if(result == 1){
	 	printf("The number is a palindrome number ");
	 }
	 else{
	 	printf("The number is not a palindrome ");
	 }
}//main ends
int Ispalindrome(){
	int number,rem,sum=0;
	printf("Enter the number of ur choice : ");
	scanf("%d",&number);
	int temp = number;
	while(temp >0){
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(number == sum)
	 return 1;
	else
	return 0; 
}
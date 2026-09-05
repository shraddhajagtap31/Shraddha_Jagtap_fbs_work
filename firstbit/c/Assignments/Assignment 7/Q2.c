#include <stdio.h>
void IsPalindrome(int *number);
void main(){
	int number;
	printf("Enter the number :");
	scanf("%d",&number);
	IsPalindrome(&number);
}
void IsPalindrome(int *number){
	int temp,rem,sum=0;
	temp=*number;
	while (temp>0){
		rem=temp%10;
		sum=sum * 10 +rem;
		temp=temp/10;
	}
	if(sum==*number){
		printf("palindrome");
		
	}
	else{
		printf("Not palindrome");
	}
}
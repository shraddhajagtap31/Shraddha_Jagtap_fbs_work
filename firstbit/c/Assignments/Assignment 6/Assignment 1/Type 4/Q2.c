#include <stdio.h>

int Ispalindrome(int);
void main(){
	int number;
	printf("Enter the number of ur choice : ");
	scanf("%d",&number);
	int res;
	res = Ispalindrome(number);
	if(res == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
int Ispalindrome(int number){
	int temp,rem,sum=0;
	temp = number;
	while(temp>0){
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(number == sum){
		return 1;
	}
	else
    	return 0;
}

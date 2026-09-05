#include <stdio.h>
void evenodd();
void main(){
    evenodd();
}
void evenodd(){
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	if(number %2==0){
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
}
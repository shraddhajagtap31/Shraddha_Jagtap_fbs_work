#include <stdio.h>

void main(){
	int a,b,c;
	printf("enter the first number : ");
	scanf("%d",&a);
	printf("enter the second number : ");
	scanf("%d",&b);
	printf("enter the third number : ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("a is the greatest number");
		}
		else{
			printf("c is the greatest number");
		}
	}
	else{
		if(b>c){
				printf("b is greatest");
			}
			else{
				printf("c is greatest");
			}
		}
}
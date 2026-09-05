#include <stdio.h>

void main(){
	int no;
	printf("enter the number : ");
	scanf("%d",&no);
	evenodd(&no);
}
void evenodd(int*a){
	int x;
	x=*a;
	if(x%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
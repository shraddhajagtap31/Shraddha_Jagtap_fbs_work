#include <stdio.h>

void checktype();
void main(){
	checktype();
}
void checktype(){
	int a,b,c;
	printf("Enter the side1 :");
	scanf("%d",&a);
	printf("Enter the side2 :");
	scanf("%d",&b);
	printf("Enter the side3 :");
	scanf("%d",&c);
	if(a == b && b ==c){
		printf("Equilateral triangle");
	}
	else if(a == b || b == c || a==c){
		printf("Isoceles triangle");
	}
	else
	printf("Scalene triangle");
	}

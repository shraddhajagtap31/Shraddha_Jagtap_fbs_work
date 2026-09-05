#include <stdio.h>

void area(int* a);
void main(){
	int radius;
	printf("enter the radii:");
	scanf("%d",&radius);
	area(&radius);
}
void area(int *x){
	int a=*x;
	float res;
	res=3.14*a*a;
	printf("The area of cicle is %f",res);
}
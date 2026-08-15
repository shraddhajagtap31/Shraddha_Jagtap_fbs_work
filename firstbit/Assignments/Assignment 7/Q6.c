#include <stdio.h>
void main(){
	int a =100,b=30,c;
	add(&a,&b,&c);
	printf("The sum of %d and %d is %d",a,b,c);
}
void add(int *x,int *y,int *c){
	int a,b;
	a=*x;
	b=*y;
	*c=a+b;
	
}
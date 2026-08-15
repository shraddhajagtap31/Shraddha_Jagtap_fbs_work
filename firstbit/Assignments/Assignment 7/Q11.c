#include <stdio.h>

void check(int*,int*,int*);
void main(){
	int a,b,c;
	printf("Enter side1 : ");
	scanf("%d",&a);
	printf("Enter side2 : ");
	scanf("%d",&b);
	printf("Enter side3 : ");
	scanf("%d",&c);
	check(&a,&b,&c);
}
void check(int *x,int*y,int*z){
	
    if (*x == *y && *y == *z)
    {
        printf("Equilateral triangle");
    }
    else if (*x == *y || *y == *z || *x == *z)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
}
 
 	

#include <stdio.h>

void greater(int*,int*,int*);
void main(){
	int a,b,c;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Enter c : ");
	scanf("%d",&c);
	greater(&a,&b,&c);
}
void greater(int *x, int *y, int *z)
{
    if(*x > *y)
    {
        if(*x > *z)
        {
            printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        if(*y > *z)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
}
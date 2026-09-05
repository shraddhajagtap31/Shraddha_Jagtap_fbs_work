#include <stdio.h>

void print(int *);
void main()
{
    int n = 5;
    print(&n);
}
void print(int *x){
	int i;
	for(int i=1;i<=10;i++){
		printf("%d ",i*(*x));
	}
}
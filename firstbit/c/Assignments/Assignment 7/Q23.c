#include <stdio.h>

void perfect(int*);
void main(){
	int number;
	printf("Enter the number of ur choice : ");
	scanf("%d",&number);
	perfect(&number);
}
void perfect(int *a){
	int i=1;
	int sum=0;
	while(i<=*a/2){
		if(*a%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum == *a)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
}
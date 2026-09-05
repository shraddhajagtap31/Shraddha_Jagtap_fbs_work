#include <stdio.h>

void main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	factorial(&n);
}
void factorial(int *n){
	int i;
    int fact = 1;
    for(i = 1; i <= *n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d", fact);
}

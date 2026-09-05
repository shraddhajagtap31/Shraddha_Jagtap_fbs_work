#include <stdio.h>

void main(){
	int i = 1;
	int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    while(i <= 10)
    {
        printf("%d ", n * i);
        i++;
    }
}

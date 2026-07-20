#include <stdio.h>

void main(){
	int number1,number2,temporarynumber;
	number1 = 121;
	number2 = 131;
	temporarynumber = number1;
	number1 = number2;
	number2 = temporarynumber;
	printf("After swapping the numbers are %d and %d", number1,number2);
}
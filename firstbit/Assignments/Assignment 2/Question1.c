#include <stdio.h>

void main(){
	int a,b,sum,diff,product,div,mod;
	char oper;
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b : ");
	scanf("%d", &b);
	printf("Enter operator: ");
	scanf(" %c", &oper);
	if (oper == '+'){
		sum=a+b;
		printf("the sum is %d", sum);
	}
	else if(oper == '-'){
		diff=a-b;
		printf("the diff is %d", diff);
	}
	else if(oper == '*'){
		product=a*b;
		printf("the product is %d", product);
	}
	else if(oper == '/'){
		div=a/b;
		printf("the div is %d", div);
	}
	else if(oper == '%'){
		mod=a%b;
		printf("the mod is %d", mod);
	}
	else
    printf("Invalid operator");
}



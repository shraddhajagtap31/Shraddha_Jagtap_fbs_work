#include <stdio.h>

void Isgreater();
void main(){
	Isgreater();
}
void Isgreater(){
	int a,b,c ;
	printf("Enter a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("a is greater");
		}
		else{
			printf("c is greater");
		}
	}
	else{
		printf("b is greater");
	}
}
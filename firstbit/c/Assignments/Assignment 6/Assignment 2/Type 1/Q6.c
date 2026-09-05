#include <stdio.h>

void Iseleigible();
void main(){
	Iseleigible();
}
void Iseleigible(){
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
    if(number % 3 == 0 && number % 5 == 0)
    {
      printf("The number is divisible by both 3 and 5");
    }
    else if(number % 3 == 0)
    {
      printf("The number is divisible by 3 only");
    }
    else if(number % 5 == 0)
    {
      printf("The number is divisible by 5 only");
    }
    else
    {
      printf("The number is not divisible by 3 or 5");
    
	}
}
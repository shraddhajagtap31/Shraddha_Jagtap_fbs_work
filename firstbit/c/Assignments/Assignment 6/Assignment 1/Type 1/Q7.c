#include <stdio.h>

void Totalsalary();
void main(){
	Totalsalary();
}
void Totalsalary(){
	int basicsalary;
	int totalsalary;
	int da,ta,hra;
	printf("Enter the salary : ");
	scanf("%d",&basicsalary);
	if(basicsalary>5000){
		da=0.15 * basicsalary;
		ta=0.25 * basicsalary;
		hra=0.30 * basicsalary;		
	}
	else{
		da=0.10 * basicsalary;
		ta=0.20 * basicsalary;
		hra=0.25 * basicsalary;		
	}
	totalsalary = basicsalary + da+hra+ta;
	printf("DA = %d\n", da);
    printf("TA = %d\n", ta);
    printf("HRA = %d\n", hra);
	printf("The total salary is : %d ",totalsalary);
}
#include <stdio.h>

typedef struct Employeedata{
	int id;
	char name[20];
	int salary;
}employee;

void storedata(employee* ,int );
void dispalydata(employee* ,int);

void main(){
	employee arr[3],brr[5];
	printf("Enter the employeee 1 details : ");
	storedata(arr,3);
	
	printf("Enter the employee 2 details : ");
	storedata(brr,5);
	printf("Details of employee 1 : ");
	displaydata(arr,3);
	
	printf("Details of employee 2 : ");
	displaydata(brr,5);
}
void storedata(employee* earr,int size){
	for(int i=0;i<size;i++){
		scanf("%d",&earr[i].id);
		scanf("%s",earr[i].name);
		scanf("%d",&earr[i].salary);
	}
}
void displaydata(employee* earr,int size){
	for(int i=0;i<size;i++){
		
		printf("\nId: %d",earr[i].id);
		printf("\nName: %s",earr[i].name);
		printf("\nSalary: %d",earr[i].salary);
		printf("\n.................\n");
	}
}
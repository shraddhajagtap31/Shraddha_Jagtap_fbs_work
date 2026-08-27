#include <stdio.h>

typedef struct Admin{
	int id;
	char name[20];
	int salary;
	int allowance;
}Admin;

void storedata(Admin* ,int );
void dispalydata(Admin* ,int);

void main(){
	Admin arr[3],brr[5];
	printf("Enter the employeee 1 details : ");
	storedata(arr,3);
	
	printf("\n.................\n");
		
	printf("Enter the Admin 2 details : ");
	storedata(brr,5);
	
	printf("Details of Admin 1 : ");
	displaydata(arr,3);
	
	
	printf("Details of Admin 2 : ");
	displaydata(brr,5);
}
void storedata(Admin* crr,int size){
     for(int i = 0; i < 3; i++) {

        printf("\nEnter details of Admin %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &crr[i].id);

        printf("Enter Name: ");
        scanf("%s", crr[i].name);

        printf("Enter Salary: ");
        scanf("%d", &crr[i].salary);

        printf("Enter Allowance: ");
        scanf("%d", &crr[i].allowance);
    }
}

void displaydata(Admin* crr,int size){
       for(int i = 0; i < 3; i++) {

        printf("ID: %d || ", crr[i].id);
        printf("Name: %s || ", crr[i].name);
        printf("Salary: %d || ", crr[i].salary);
        printf("Allowance: %d\n", crr[i].allowance);

        printf("-------------------------------\n");
    }
}
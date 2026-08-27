#include <stdio.h>

typedef struct hr{
	int id;
	char name[20];
	int salary;
	int commission;
}hr;

void storedata(hr* ,int );
void dispalydata(hr* ,int);

void main(){
	hr arr[3],brr[5];
	printf("Enter the employeee 1 details : ");
	storedata(arr,3);
	
	printf("\n.................\n");
		
	printf("Enter the hr 2 details : ");
	storedata(brr,5);
	
	printf("Details of hr 1 \n : ");
	displaydata(arr,3);
	
	
	printf("Details of hr 2 \n: ");
	displaydata(brr,5);
}
void storedata(hr* crr,int size){
     for(int i = 0; i < 3; i++) {

        printf("\nEnter details of hr %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &crr[i].id);

        printf("Enter Name: ");
        scanf("%s", crr[i].name);

        printf("Enter Salary: ");
        scanf("%d", &crr[i].salary);

        printf("Enter commission: ");
        scanf("%d", &crr[i].commission);
    }
}

void displaydata(hr* crr,int size){
       for(int i = 0; i < 3; i++) {

        printf("ID: %d || ", crr[i].id);
        printf("Name: %s || ", crr[i].name);
        printf("Salary: %d || ", crr[i].salary);
        printf("commission: %d\n", crr[i].commission);

        printf("-------------------------------\n");
    }
}
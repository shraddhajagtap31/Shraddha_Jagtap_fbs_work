#include <stdio.h>

typedef struct Student{
	int rollno;
	char name[30];
	int marks;
}Student;

void storedata(Student* ,int );
void displaydata(Student* ,int);
	
void main(){
	Student arr[3],brr[2],crr[1];
	
	printf("Enter the student details 1: ");
	storedata(arr,3);
	
	printf("Enter the student details 2: ");
	storedata(brr,2);
	
	printf("Enter the student details 3: ");
	storedata(arr,1);
	
	printf("Details of atudents : ");
	displaydata(brr,2);
	
	printf("Details of atudents : ");
	displaydata(crr,1);
	
	printf("Details of atudents : ");
	displaydata(arr,3);
}//main ends
	
void storedata(Student* sarr,int size){
	
	for(int i=0;i<size;i++){
		scanf("%d",&sarr[i].rollno);
		scanf("%s",sarr[i].name);
		scanf("%d",&sarr[i].marks);
	}
}
	
void displaydata(Student* sarr,int size){
	
	for(int i=0;i<size;i++){
		
		printf("\nRoll No: %d",sarr[i].rollno);
		printf("\nName: %s",sarr[i].name);
		printf("\nMarks: %d",sarr[i].marks);
		printf("\n.................\n");
	}

}
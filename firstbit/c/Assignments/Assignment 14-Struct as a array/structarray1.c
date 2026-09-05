typedef struct Student{
	int rollno;
	char name[30];
	int marks;
}Student;
void main(){
	Student sarr[3];
	printf("Enter the student details : ");
	
	for(int i=0;i<3;i++){
		scanf("%d",&sarr[i].rollno);
		scanf("%s",sarr[i].name);
		scanf("%d",&sarr[i].marks);
	}
	
	printf("\n.............................\n");
	
	for(int i=0;i<3;i++){
		printf("\nRoll No: %d",sarr[i].rollno);
		printf("\nName: %s",sarr[i].name);
		printf("\nMarks: %d",sarr[i].marks);
		printf("\n.................\n");
	}
}
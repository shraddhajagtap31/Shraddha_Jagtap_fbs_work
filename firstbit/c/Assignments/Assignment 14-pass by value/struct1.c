struct Student{
	int rollno;
	char name[20];
	int marks;
};
struct Student storedata();
void display(struct Student);

void main(){
	struct Student s1,s2,s3;
	
	printf("Enter the data of student1 : ");
	s1=storedata(s1);
	
	printf("Enter the data of student2 : ");
	s2=storedata(s2);
	
	printf("Enter the data of student3 : ");
	s3=storedata(s3);
	
	display(s1);
	display(s2);
	display(s3);		
}

void display(struct Student stud )
{
	printf("\nRoll No : %d \nName : %s \nMarks: %d",stud.rollno,stud.name,stud.marks);
}
 
struct Student storedata(){
	struct Student temp;
	scanf("%d",&temp.rollno);
	scanf("%s",temp.name );
	scanf("%d",&temp.marks);
	return temp;
}
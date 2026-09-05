struct student{
	int rollnumber;
    char name[15];
    int marks;
};
void main(){
	struct student s1,s2;
	printf("Enter the roll number : ");
	scanf("%d",&s1.rollnumber);
	printf("Enter the name : ");
	scanf("%s",s1.name);
	printf("Enter the marks : ");
	scanf("%d",&s1.marks);
	
	printf("\nRoll number : %d",s1.rollnumber);
	printf("\nName : %s",s1.name);	
	printf("\nMarks : %d",s1.marks);
	
	printf("\n....................\n");
	
	s2.rollnumber = 12;
	strcpy(s2.name,"Megha");
	s2.marks=97;
	
	printf("\nRoll number : %d",s2.rollnumber);
	printf("\nName : %s",s2.name);	
	printf("\nMarks : %d",s2.marks);
		
}
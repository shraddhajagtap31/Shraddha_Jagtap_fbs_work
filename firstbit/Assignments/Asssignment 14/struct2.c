struct Employeedata{
	int id;
	char name[20];
	int salary;
};
void main(){
	struct  Employeedata ep1,ep2;
	printf("Enter employee id :");
	scanf("%d",&ep1.id);
	printf("Enter employee name  :");
	scanf("%s",&ep1.name);
	printf("Enter employee salary :");
	scanf("%d",&ep1.salary);
	
	printf("The data is as follows :-");
	
	printf("\n....................\n");
	
	printf("\nEmplyee Id : %d",ep1.id);
	printf("\nEmployee Name : %s",ep1.name);	
	printf("\nEmployee salary : %d",ep1.salary);
	
	printf("\n....................\n");
	
	ep2.id=121;
	strcpy(ep2.name,"Radhika");
	ep2.salary=75000;
	
	printf("\nEmplyee Id : %d",ep2.id);
	printf("\nEmployee Name : %s",ep2.name);	
	printf("\nEmployee salary : %d",ep2.salary);
}
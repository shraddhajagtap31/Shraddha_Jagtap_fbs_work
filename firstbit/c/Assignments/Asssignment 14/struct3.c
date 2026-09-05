struct admin{
	int id;
	char name[20];
	int salary;
	int allowance;
};
void main(){
	struct admin a1,a2;
	printf("Enter id :");
	scanf("%d",&a1.id);
	printf("Enter name :");
	scanf("%s",a1.name);
	printf("Enter salary :");
	scanf("%d",&a1.salary);
	printf("Enter allowance :");
	scanf("%d",&a1.allowance);
	
	printf("\nId : %d",a1.id);
	printf("\nName : %s",a1.name);
	printf("\nSalary: %d",a1.salary);
	printf("\nAllowance : %d",a1.allowance);
	
	printf("\n........................");
	
	a2.id=121;
	strcpy(a2.name,"Shraddha");
	a2.salary=70000;
	a2.allowance=15;
	
	printf("\nId : %d",a2.id);
	printf("\nName : %s",a2.name);
	printf("\nSalary: %d",a2.salary);
	printf("\nAllowance : %d",a2.allowance);
	
}
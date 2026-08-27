struct hr{
	int id;
	char name[20];
	int salary;
	int commission;
};
void main(){
	struct hr h1,h2;
	printf("Enter id :");
	scanf("%d",&h1.id);
	printf("Enter name :");
	scanf("%s",h1.name);
	printf("Enter salary :");
	scanf("%d",&h1.salary);
	printf("Enter commission :");
	scanf("%d",&h1.commission);
	
	printf("\nId : %d",h1.id);
	printf("\nName : %s",h1.name);
	printf("\nSalary: %d",h1.salary);
	printf("\nAllowance : %d",h1.commission);
	
	printf("\n........................");
	
	h2.id=121;
	strcpy(h2.name,"Shraddha");
	h2.salary=70000;
	h2.commission=15;
	
	printf("\nId : %d",h2.id);
	printf("\nName : %s",h2.name);
	printf("\nSalary: %d",h2.salary);
	printf("\nAllowance : %d",h2.commission);
	
}
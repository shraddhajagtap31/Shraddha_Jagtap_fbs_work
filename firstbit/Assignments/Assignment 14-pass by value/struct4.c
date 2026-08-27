struct Hr{
	int id;
	char name[30];
	int salary;
	int commission;
};

void display(struct Hr);
struct Hr storedata();

void main(){
	struct Hr hr1,hr2,hr3;
	
	printf("Enter details for hr1 : ");
	hr1=storedata();
	printf("Enter details for hr2 : ");
	hr2=storedata();
	printf("Enter details for hr3 : ");
	hr3=storedata();
	
	display(hr1);
	display(hr2);
	display(hr3);	
}
void display(struct Hr hr){
	printf("\nId: %d",hr.id);
	printf("\nName: %s",hr.name);
	printf("\nSalary: %d",hr.salary);
	printf("\nCommission: %d",hr.commission);
}
struct Hr storedata(){
	struct Hr temp;
	scanf("%d",&temp.id);
	scanf("%s",&temp.name);
	scanf("%d",&temp.salary);
	scanf("%d",&temp.commission);
	return temp;
}
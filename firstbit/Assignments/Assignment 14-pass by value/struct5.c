struct Salesmanager{
	int id;
	char name[30];
	int salary;
	int incentive;
	int target;
};
void display(struct Salesmanager);
struct Salesmanager storedata();
void main(){
	struct Salesmanager s1,s2;
	printf("Enter the details of the s1: ");
	s1=storedata();
	printf(\n.........................\n);
	printf("Enter the details of the s2: ");
	s2=storedata();
	
    display(s1);
	display(s2);		
}
void display(struct Salesmanager a)
{
    printf("\nId: %d",a.id);
	printf("\nName: %s",a.name);
	printf("\nSalary: %d",a.salary);
	printf("\nCommission: %d",a.incentive);
	printf("\nTarget: %d",a.target);
}
 
struct Salesmanager storedata(){
	struct Salesmanager temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name );
	scanf("%d",&temp.salary);
	scanf("%d",&temp.incentive);
	scanf("%d",&temp.target);
	return temp;
}
	

typedef struct Employeedata{
	int id;
	char name[20];
	int salary;
}employee;
void main(){
	employee arr[3];
	printf("Enter the details: ");
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i].id);
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].salary);
	}
	for(int i=0;i<3;i++){
		printf("Id: %d ||",arr[i].id);
		printf("Name: %s ||",arr[i].name);
		printf("Salary: %d ",arr[i].salary);
		printf("\n.................\n");
	}
}
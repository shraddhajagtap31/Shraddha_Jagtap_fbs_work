struct Employeedata
{
    int id;
    char name[20];
    int salary;
};

void display(struct Employeedata);
struct Employeedata storedata();

void main()
{
    struct Employeedata e1, e2, e3;

    printf("Enter the details of emp1 : ");
    e1 = storedata();

    printf("Enter the details of emp2 : ");
    e2 = storedata();

    printf("Enter the details of emp3 : ");
    e3 = storedata();

    display(e1);
    display(e2);
    display(e3);
}

void display(struct Employeedata emp)
{
    printf("\nEmp Id : %d", emp.id);
    printf("\nName : %s", emp.name);
    printf("\nSalary : %d\n", emp.salary);
}

struct Employeedata storedata()
{
    struct Employeedata temp;

    scanf("%d", &temp.id);
    scanf("%s", temp.name);
    scanf("%d", &temp.salary);
    return temp;
}
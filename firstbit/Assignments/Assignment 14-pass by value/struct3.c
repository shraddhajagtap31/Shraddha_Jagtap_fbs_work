struct Admin
{
    int id;
    char name[20];
    int salary;
    int allowance;
};

struct Admin storedata();
void display(struct Admin);
void main()
{
    struct Admin a1;
    printf("Enter Admin details : ");
    a1 = storedata();
    display(a1);
}
struct Admin storedata()
{
    struct Admin temp;

    scanf("%d", &temp.id);
    scanf("%s", temp.name);
    scanf("%d", &temp.salary);
    scanf("%d", &temp.allowance);

    return temp;
}

void display(struct Admin a)
{
    printf("\nAdmin Id : %d", a.id);
    printf("\nName : %s", a.name);
    printf("\nSalary : %d", a.salary);
    printf("\nAllowance : %d", a.allowance);
}
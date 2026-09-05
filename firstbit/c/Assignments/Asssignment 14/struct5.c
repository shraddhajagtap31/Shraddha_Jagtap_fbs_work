#include <stdio.h>
#include <string.h>

struct SalesManager
{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
};

void main()
{
    struct SalesManager s1, s2;
    printf("Enter id : ");
    scanf("%d", &s1.id);
    printf("Enter name : ");
    scanf("%s", s1.name);
    printf("Enter salary : ");
    scanf("%d", &s1.salary);
    printf("Enter incentive :");
    scanf("%d",&s1.incentive);
    printf("Enter target : ");
    scanf("%d", &s1.target);
    printf("\nId : %d", s1.id);
    printf("\nName : %s", s1.name);
    printf("\nSalary : %d", s1.salary);
    printf("\nIncentive : %d", s1.incentive);
    printf("\nTarget : %d", s1.target);

    printf("\n........................");

    s2.id = 102;
    strcpy(s2.name, "Shraddha");
    s2.salary = 70000;
    s2.target = 100000;
    s2.incentive = 150000;
    printf("\nId : %d", s2.id);
    printf("\nName : %s", s2.name);
    printf("\nSalary : %d", s2.salary);
    printf("\nIncentive : %d", s2.incentive);
    printf("\nTarget : %d", s2.target);
}
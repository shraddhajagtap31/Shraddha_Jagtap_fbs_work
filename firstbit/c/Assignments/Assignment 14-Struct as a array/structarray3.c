#include <stdio.h>

typedef struct Admin {
    int id;
    char name[20];
    int salary;
    int allowance;
} Admin;

void main() {
    Admin arr[3];

    for(int i = 0; i < 3; i++) {

        printf("\nEnter details of Admin %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &arr[i].id);

        printf("Enter Name: ");
        scanf("%s", arr[i].name);

        printf("Enter Salary: ");
        scanf("%d", &arr[i].salary);

        printf("Enter Allowance: ");
        scanf("%d", &arr[i].allowance);
    }

    printf("\n\n--------- Admin Details ---------\n");

    for(int i = 0; i < 3; i++) {

        printf("ID: %d || ", arr[i].id);
        printf("Name: %s || ", arr[i].name);
        printf("Salary: %d || ", arr[i].salary);
        printf("Allowance: %d\n", arr[i].allowance);

        printf("-------------------------------\n");
    }
}
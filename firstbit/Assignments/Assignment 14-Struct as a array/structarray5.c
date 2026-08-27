#include <stdio.h>

typedef struct SalesManager {
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
} SalesManager;

void main() {

    SalesManager arr[3];

    for(int i = 0; i < 3; i++) {

        printf("\nEnter details of Sales Manager ");

        printf("Enter ID: ");
        scanf("%d", &arr[i].id);

        printf("Enter Name: ");
        scanf("%s", arr[i].name);

        printf("Enter Salary: ");
        scanf("%d", &arr[i].salary);

        printf("Enter Incentive: ");
        scanf("%d", &arr[i].incentive);

        printf("Enter Target: ");
        scanf("%d", &arr[i].target);
    }

    printf("\n--------- Sales Manager Details ---------\n");

    for(int i = 0; i < 3; i++) {

        printf("ID: %d || ", arr[i].id);
        printf("Name: %s || ", arr[i].name);
        printf("Salary: %d || ", arr[i].salary);
        printf("Incentive: %d || ", arr[i].incentive);
        printf("Target: %d\n", arr[i].target);

        printf("-----------------------------------------\n");
    }
}
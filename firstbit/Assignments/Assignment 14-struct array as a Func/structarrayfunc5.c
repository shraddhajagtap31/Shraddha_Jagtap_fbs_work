#include <stdio.h>

typedef struct SalesManager {
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
} SalesManager;

void storedata(SalesManager*, int);
void displaydata(SalesManager*, int);

void main() {

    SalesManager arr[3];

    printf("Enter Sales Manager details:");

    storedata(arr, 3);

    printf("detais of saes manager are : ");

    displaydata(arr, 3);
}

void storedata(SalesManager* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("\nEnter details of Sales Manager %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &crr[i].id);

        printf("Enter Name: ");
        scanf("%s", crr[i].name);

        printf("Enter Salary: ");
        scanf("%d", &crr[i].salary);

        printf("Enter Incentive: ");
        scanf("%d", &crr[i].incentive);

        printf("Enter Target: ");
        scanf("%d", &crr[i].target);
    }
}

void displaydata(SalesManager* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("\nID: %d || ", crr[i].id);
        printf("Name: %s || ", crr[i].name);
        printf("Salary: %d || ", crr[i].salary);
        printf("Incentive: %d || ", crr[i].incentive);
        printf("Target: %d\n", crr[i].target);

        printf("-----------------------------------------\n");
    }
}
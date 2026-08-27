#include <stdio.h>

typedef struct Hr {
    int id;
    char name[20];
    int salary;
    int commission;
} Hr;

int main() {
    Hr arr[3];

    for(int i = 0; i < 3; i++) {

        printf("\nEnter details of Hr %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &arr[i].id);

        printf("Enter Name: ");
        scanf("%s", arr[i].name);

        printf("Enter Salary: ");
        scanf("%d", &arr[i].salary);

        printf("Enter commission: ");
        scanf("%d", &arr[i].commission);
    }

    printf("\n\n--------- Hr Details ---------\n");

    for(int i = 0; i < 3; i++) {

        printf("ID: %d || ", arr[i].id);
        printf("Name: %s || ", arr[i].name);
        printf("Salary: %d || ", arr[i].salary);
        printf("commission: %d\n", arr[i].commission);

        printf("-------------------------------\n");
    }
    return 0;
}
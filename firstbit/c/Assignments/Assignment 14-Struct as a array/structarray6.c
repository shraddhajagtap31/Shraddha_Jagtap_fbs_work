#include <stdio.h>

typedef struct Date {
    int date;
    int month;
    int year;
} Date;

void main() {
    Date arr[3];

    for(int i = 0; i < 3; i++) {

        printf("\nEnter Date %d:\n", i + 1);

        printf("Enter Date: ");
        scanf("%d", &arr[i].date);

        printf("Enter Month: ");
        scanf("%d", &arr[i].month);

        printf("Enter Year: ");
        scanf("%d", &arr[i].year);
    }
    printf("\n.................\n");
    for(int i = 0; i < 3; i++) {

        printf("Date: %d/%d/%d\n",arr[i].date,arr[i].month,arr[i].year);
    }
}
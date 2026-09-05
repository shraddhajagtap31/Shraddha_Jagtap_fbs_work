#include <stdio.h>

typedef struct Date {
    int date;
    int month;
    int year;
} Date;

void storedata(Date*, int);
void displaydata(Date*, int);

void main() {

    Date arr[3], brr[5];

    printf("\nEnter Date 1 details:\n");
    storedata(arr, 3);

    printf("\nEnter Date 2 details:\n");
    storedata(brr, 5);

    printf("Date 1 :");
    displaydata(arr, 3);

    printf("Date 2 :");
    displaydata(brr, 5);
}

void storedata(Date* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("\nEnter Date %d:\n", i + 1);

        printf("Enter Date: ");
        scanf("%d", &crr[i].date);

        printf("Enter Month: ");
        scanf("%d", &crr[i].month);

        printf("Enter Year: ");
        scanf("%d", &crr[i].year);
    }
}

void displaydata(Date* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("Date: %d/%d/%d\n",crr[i].date,crr[i].month,crr[i].year);
    }
}
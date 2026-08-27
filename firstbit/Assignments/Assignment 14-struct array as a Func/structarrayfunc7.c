#include <stdio.h>

typedef struct Time {
    int hour;
    int min;
    int sec;
} Time;

void storedata(Time*, int);
void displaydata(Time*, int);

void main() {

    Time arr[3], brr[5];

    printf("\nEnter Time 1 details:\n");
    storedata(arr, 3);

    printf("\nEnter Time 2 details:\n");
    storedata(brr, 5);

    printf("Time 1:");
    displaydata(arr, 3);

    printf("Time 2 :");
    displaydata(brr, 5);
}

void storedata(Time* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("\nEnter Time %d:\n", i + 1);

        printf("Enter Hour: ");
        scanf("%d", &crr[i].hour);

        printf("Enter Minute: ");
        scanf("%d", &crr[i].min);

        printf("Enter Second: ");
        scanf("%d", &crr[i].sec);
    }
}

void displaydata(Time* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("Time: %d:%d:%d\n",crr[i].hour,crr[i].min,crr[i].sec);
    }
}
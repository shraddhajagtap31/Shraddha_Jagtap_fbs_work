#include <stdio.h>

typedef struct Time {
    int hour;
    int min;
    int sec;
} Time;

void main() {

    Time arr[3];

    for(int i = 0; i < 3; i++) {

        printf("\nEnter Time %d:\n", i + 1);

        printf("Enter Hour: ");
        scanf("%d", &arr[i].hour);

        printf("Enter Minute: ");
        scanf("%d", &arr[i].min);

        printf("Enter Second: ");
        scanf("%d", &arr[i].sec);
    }

    printf("\n--------- Time Details ---------\n");

    for(int i = 0; i < 3; i++) {

        printf("Time: %d:%d:%d\n",arr[i].hour,arr[i].min,arr[i].sec);
    }
}
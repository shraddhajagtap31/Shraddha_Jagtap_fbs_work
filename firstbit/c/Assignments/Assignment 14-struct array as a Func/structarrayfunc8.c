#include <stdio.h>

typedef struct Distance {
    int feet;
    int inch;
} Distance;

void storedata(Distance*, int);
void displaydata(Distance*, int);

void main() {

    Distance arr[3], brr[5];

    printf("\nEnter Distance 1 details:\n");
    storedata(arr, 3);

    printf("\nEnter Distance 2 details:\n");
    storedata(brr, 5);

    printf("Distance 1 :");
    displaydata(arr, 3);

    printf("Distance 2 :");
    displaydata(brr, 5);
}

void storedata(Distance* crr, int size) {
    for(int i = 0; i < size; i++) {

        printf("\nEnter Distance %d:\n", i + 1);
        printf("Enter Feet: ");
        scanf("%d", &crr[i].feet);
        printf("Enter Inch: ");
        scanf("%d", &crr[i].inch);
    }
}

void displaydata(Distance* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("Distance: %d feet %d inch\n",crr[i].feet,crr[i].inch);
    }
}
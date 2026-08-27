#include <stdio.h>

typedef struct Complex {
    int real;
    int imaginary;
} Complex;

void storedata(Complex*, int);
void displaydata(Complex*, int);

void main() {

    Complex arr[3], brr[5];

    printf("\nEnter Complex Number 1 details:\n");
    storedata(arr, 3);

    printf("\nEnter Complex Number 2 details:\n");
    storedata(brr, 5);

    printf("Complex Number 1:");
    displaydata(arr, 3);

    printf("Complex Number 2:");
    displaydata(brr, 5);
}

void storedata(Complex* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("\nEnter Complex Number %d:\n", i + 1);
        printf("Enter Real: ");
        scanf("%d", &crr[i].real);
        printf("Enter Imaginary: ");
        scanf("%d", &crr[i].imaginary);
    }
}

void displaydata(Complex* crr, int size) {

    for(int i = 0; i < size; i++) {
        printf("Complex Number: %d + %di\n",crr[i].real,crr[i].imaginary);
    }
}
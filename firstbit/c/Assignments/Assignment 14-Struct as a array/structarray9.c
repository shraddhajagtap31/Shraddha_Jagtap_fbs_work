#include <stdio.h>

typedef struct Complex {
    int real;
    int imaginary;
} Complex;

void main() {

    Complex arr[3];
    for(int i = 0; i < 3; i++) {
        printf("\nEnter Complex Number %d:\n", i + 1);

        printf("Enter Real: ");
        scanf("%d", &arr[i].real);

        printf("Enter Imaginary: ");
        scanf("%d", &arr[i].imaginary);
    }

    printf("\n--------- Complex Details ---------\n");

    for(int i = 0; i < 3; i++) {

        printf("Complex Number: %d + %di\n",arr[i].real,arr[i].imaginary);
    }
}
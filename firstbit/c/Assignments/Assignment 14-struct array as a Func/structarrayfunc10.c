#include <stdio.h>

typedef struct Product {
    int id;
    char name[20];
    int quantity;
    int price;
} Product;

void storedata(Product*, int);
void displaydata(Product*, int);

void main() {

    Product arr[3], brr[5];

    printf("\nEnter Product 1 details:\n");
    storedata(arr, 3);

    printf("\nEnter Product 2 details:\n");
    storedata(brr, 5);

    printf("Product1:");
    displaydata(arr, 3);

    printf("Product2:");
    displaydata(brr, 5);
}

void storedata(Product* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("\nEnter Product %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &crr[i].id);

        printf("Enter Name: ");
        scanf("%s", crr[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &crr[i].quantity);

        printf("Enter Price: ");
        scanf("%d", &crr[i].price);
    }
}

void displaydata(Product* crr, int size) {

    for(int i = 0; i < size; i++) {

        printf("ID: %d || ", crr[i].id);
        printf("Name: %s || ", crr[i].name);
        printf("Quantity: %d || ", crr[i].quantity);
        printf("Price: %d\n", crr[i].price);

        printf("-----------------------------------\n");
    }
}
#include <stdio.h>

typedef struct Product {
    int id;
    char name[20];
    int quantity;
    int price;
} Product;

void main() {

    Product arr[3];
    for(int i = 0; i < 3; i++) {
        printf("\nEnter Product %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &arr[i].id);

        printf("Enter Name: ");
        scanf("%s", arr[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &arr[i].quantity);

        printf("Enter Price: ");
        scanf("%d", &arr[i].price);
    }

    printf("\n--------- Product Details ---------\n");

    for(int i = 0; i < 3; i++) {

        printf("ID: %d || ", arr[i].id);
        printf("Name: %s || ", arr[i].name);
        printf("Quantity: %d || ", arr[i].quantity);
        printf("Price: %d\n", arr[i].price);

        printf("-----------------------------------\n");
    }
}
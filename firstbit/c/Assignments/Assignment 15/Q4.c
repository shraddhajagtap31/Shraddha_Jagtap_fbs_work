#include <stdio.h>

struct Product
{
    char name[30];
    float price;
    int quantity;
};
void main()
{
    struct Product p[10];
    int count = 0;
    int choice;

    do
    {
        printf("\n1. Add Product");
        printf("\n2. Display Cart");
        printf("\n3. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct(p, &count);
                break;

            case 2:
                displayCart(p, count);
                break;

            case 3:
                printf("\nThank you!");
                break;

            default:
                printf("\nInvalid choice");
        }

    } while(choice != 3);
}
void addProduct(struct Product p[], int *count)
{
    printf("\nEnter product name: ");
    scanf("%s", p[*count].name);
    printf("Enter price: ");
    scanf("%f", &p[*count].price);
    printf("Enter quantity: ");
    scanf("%d", &p[*count].quantity);
    (*count)++;
}

void displayCart(struct Product p[], int count)
{
    int i;
    float total = 0;
    printf("\nCART\n");
    for(i = 0; i < count; i++)
    {
        printf("\nProduct: %s", p[i].name);
        printf("\nPrice: %.2f", p[i].price);
        printf("\nQuantity: %d", p[i].quantity);
        printf("\nCost: %.2f\n", p[i].price * p[i].quantity);

        total = total + (p[i].price * p[i].quantity);
    }
    printf("\nTotal Cost = %.2f\n", total);
}

struct Product
{
    int id;
    char name[20];
    int quantity;
    float price;
};

void main()
{
    struct Product p1, p2;
    printf("Enter id : ");
    scanf("%d", &p1.id);
    printf("Enter name : ");
    scanf("%s", p1.name);
    printf("Enter quantity : ");
    scanf("%d", &p1.quantity);
    printf("Enter price : ");
    scanf("%f", &p1.price);
    printf("\nId : %d", p1.id);
    printf("\nName : %s", p1.name);
    printf("\nQuantity : %d", p1.quantity);
    printf("\nPrice : %.2f", p1.price);

    printf("\n........................");

    p2.id = 101;
    strcpy(p2.name, "Laptop");
    p2.quantity = 2;
    p2.price = 55000.50;
    printf("\nId : %d", p2.id);
    printf("\nName : %s", p2.name);
    printf("\nQuantity : %d", p2.quantity);
    printf("\nPrice : %.2f", p2.price);
}
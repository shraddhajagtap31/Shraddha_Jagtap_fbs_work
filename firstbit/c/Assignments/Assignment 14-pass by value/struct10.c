struct Product
{
    int id;
    char name[20];
    int quantity;
    float price;
};

struct Product storedata();
void display(struct Product);

void main()
{
    struct Product p1;

    printf("Enter Product details : ");
    p1 = storedata();

    display(p1);
}
void display(struct Product p)
{
    printf("\nProduct Id : %d", p.id);
    printf("\nName : %s", p.name);
    printf("\nQuantity : %d", p.quantity);
    printf("\nPrice : %.2f", p.price);
}
struct Product storedata()
{
    struct Product temp;

    scanf("%d", &temp.id);
    scanf("%s", temp.name);
    scanf("%d", &temp.quantity);
    scanf("%f", &temp.price);

    return temp;
}
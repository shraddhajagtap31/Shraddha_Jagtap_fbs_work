struct Complex
{
    float real;
    float imaginary;
};

struct Complex storedata();
void display(struct Complex);

void main()
{
    struct Complex c1;
    printf("Enter Complex Number : ");
    c1 = storedata();

    display(c1);
}
void display(struct Complex c)
{
    printf("\nComplex Number : %.2f + %.2fi", c.real, c.imaginary);
}
struct Complex storedata()
{
    struct Complex temp;

    scanf("%f", &temp.real);
    scanf("%f", &temp.imaginary);

    return temp;
}

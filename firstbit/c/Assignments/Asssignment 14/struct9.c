struct Complex
{
    float real;
    float imaginary;
};

void main()
{
    struct Complex c1, c2;
    printf("Enter real part : ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part : ");
    scanf("%f", &c1.imaginary);
    printf("\nComplex number : %.2f + %.2fi", c1.real, c1.imaginary);

    printf("\n........................");

    c2.real = 5.5;
    c2.imaginary = 3.2;
    printf("\nComplex number : %.2f + %.2fi", c2.real, c2.imaginary);
}
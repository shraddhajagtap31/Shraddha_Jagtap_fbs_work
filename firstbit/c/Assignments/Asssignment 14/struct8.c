struct Distance
{
    int feet;
    int inch;
};

void main()
{
    struct Distance d1, d2;
    printf("Enter feet : ");
    scanf("%d", &d1.feet);
    printf("Enter inch : ");
    scanf("%d", &d1.inch);
    printf("\nDistance : %d feet %d inch", d1.feet, d1.inch);

    printf("\n........................");

    d2.feet = 10;
    d2.inch = 6;

    printf("\nDistance : %d feet %d inch", d2.feet, d2.inch);
}
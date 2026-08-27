struct Distance
{
    int feet;
    int inch;
};
struct Distance storedata();
void display(struct Distance);

void main()
{
    struct Distance d1;
    printf("Enter Distance : ");
    d1 = storedata();

    display(d1);
}
void display(struct Distance d)
{
    printf("\nDistance : %d feet %d inch", d.feet, d.inch);
}
struct Distance storedata()
{
    struct Distance temp;
    scanf("%d", &temp.feet);
    scanf("%d", &temp.inch);
    return temp;
}

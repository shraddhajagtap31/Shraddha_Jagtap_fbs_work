
struct Date
{
    int date;
    int month;
    int year;
};

void main()
{
    struct Date d1, d2;
    printf("Enter date : ");
    scanf("%d", &d1.date);
    printf("Enter month : ");
    scanf("%d", &d1.month);
    printf("Enter year : ");
    scanf("%d", &d1.year);
    printf("\nDate : %d/%d/%d", d1.date, d1.month, d1.year);

    printf("\n........................");

    d2.date = 22;
    d2.month = 8;
    d2.year = 2026;

    printf("\nDate : %d/%d/%d", d2.date, d2.month, d2.year);
}
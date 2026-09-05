#include <stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};
struct Date storedata();
void display(struct Date);
void main()
{
    struct Date d1;

    printf("Enter Date : ");
    d1 = storedata();

    display(d1);
}
struct Date storedata()
{
    struct Date temp;

    scanf("%d", &temp.date);
    scanf("%d", &temp.month);
    scanf("%d", &temp.year);

    return temp;
}
void display(struct Date d)
{
    printf("\nDate : %d-%d-%d", d.date, d.month, d.year);
}
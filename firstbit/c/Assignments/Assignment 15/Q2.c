#include <stdio.h>

typedef struct Time
{
    int hrs;
    int min;
    int sec;
}Time;

void storedata(Time *);
void displaydata(Time);
Time addtime(Time, Time);
int convertsec(Time);

void main()
{
    Time t1, t2, t3;
    int total;

    printf("\n====== Enter First Time ======\n");
    storedata(&t1);

    printf("\n====== Enter Second Time ======\n");
    storedata(&t2);

    printf("\n====== First Time ======\n");
    displaydata(t1);

    printf("\n====== Second Time ======\n");
    displaydata(t2);

    t3 = addtime(t1, t2);

    printf("\n====== Addition of Time ======\n");
    displaydata(t3);

    total = convertsec(t3);

    printf("\nTime in seconds = %d", total);
}

void storedata(Time *t)
{
    printf("Enter Hours: ");
    scanf("%d", &t->hrs);

    printf("Enter Minutes: ");
    scanf("%d", &t->min);

    printf("Enter Seconds: ");
    scanf("%d", &t->sec);
}

void displaydata(Time t)
{
    printf("%d hrs : %d min : %d sec\n", t.hrs, t.min, t.sec);
}

Time addtime(Time t1, Time t2)
{
    Time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hrs = t1.hrs + t2.hrs;

    if(t3.sec >= 60)
    {
        t3.sec = t3.sec - 60;
        t3.min++;
    }

    if(t3.min >= 60)
    {
        t3.min = t3.min - 60;
        t3.hrs++;
    }

    return t3;
}

int convertsec(Time t)
{
    int total;

    total = (t.hrs * 60 * 60) + (t.min * 60) + t.sec;

    return total;
}
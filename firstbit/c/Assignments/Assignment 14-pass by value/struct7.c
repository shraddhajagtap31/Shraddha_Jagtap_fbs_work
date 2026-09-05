struct Time
{
    int hour;
    int min;
    int sec;
};
struct Time storedata();
void display(struct Time);
void main()
{
    struct Time t1;

    printf("Enter the Time : ");
    t1 = storedata();

    display(t1);
}
void display(struct Time t)
{
    printf("\nTime : %d:%d:%d", t.hour, t.min, t.sec);
}

struct Time storedata()
{
    struct Time temp;
    scanf("%d", &temp.hour);
    scanf("%d", &temp.min);
    scanf("%d", &temp.sec);
    return temp;
}

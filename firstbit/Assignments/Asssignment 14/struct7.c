struct Time
{
    int hour;
    int min;
    int sec;
};

void main()
{
    struct Time t1, t2;
    printf("Enter hour : ");
    scanf("%d", &t1.hour);
    printf("Enter minute : ");
    scanf("%d", &t1.min);
    printf("Enter second : ");
    scanf("%d", &t1.sec);
    printf("\nTime : %d:%d:%d", t1.hour, t1.min, t1.sec);
    
    printf("\n........................");

    t2.hour = 10;
    t2.min = 30;
    t2.sec = 45;

    printf("\nTime : %d:%d:%d", t2.hour, t2.min, t2.sec);
}
#include <stdio.h>

int Isleapyear(int);
void main()
{
    int year;
    int res;
    printf("Enter the year: ");
    scanf("%d", &year);
    res = Isleapyear(year);
    if(res == 1)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
}
int Isleapyear(int year)
{
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
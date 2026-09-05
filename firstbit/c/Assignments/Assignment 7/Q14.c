#include <stdio.h>

void calculateprice(int *, char*);
void main()
{
    int price;
    char option;
    printf("Are you a student y/n: ");
    scanf(" %c", &option);
    printf("Enter price: ");
    scanf("%d", &price);
    calculateprice(&price, &option);
}

void calculateprice(int *p, char* opt)
{
    int topay;
    if(*opt == 'y')
    {
        if(*p > 500)
            topay = *p - (0.20 * (*p));
        else
            topay = *p - (0.10 * (*p));
    }
    else
    {
        if(*p > 600)
            topay = *p - (0.15 * (*p));
        else
            topay = *p;
    }

    printf("Payable amount = %d", topay);
}
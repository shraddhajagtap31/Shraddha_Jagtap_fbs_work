#include <stdio.h>

int calculateprice();

void main()
{
    int topay;
    topay = calculateprice();
    printf("Payable amount = %d", topay);
}

int calculateprice()
{
    int price, topay;
    char option;
    printf("Are you a student y/n: ");
    scanf(" %c", &option);
    printf("Enter price: ");
    scanf("%d", &price);
    if(option == 'y')
    {
        if(price > 500)
            topay = price - (0.20 * price);
        else
            topay = price - (0.10 * price);
    }
    else
    {
        if(price > 600)
            topay = price - (0.15 * price);
        else
            topay = price;
    }

    return topay;
}
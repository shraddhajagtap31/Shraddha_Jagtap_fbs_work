#include <stdio.h>

void calculateprice(int price, char option);
void main()
{
    int price;
    char option;
    printf("Are you a student y/n: ");
    scanf(" %c", &option);
    printf("Enter price: ");
    scanf("%d", &price);
    calculateprice(price, option);
}

void calculateprice(int price, char option)
{
    int topay;
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

    printf("Payable amount = %d", topay);
}
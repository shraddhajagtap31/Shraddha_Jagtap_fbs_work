#include <stdio.h>

int calculateprice(int price, char option);
void main()
{
    int price, topay;
    char option;
    printf("Are you a student y/n: ");
    scanf(" %c", &option);
    printf("Enter price: ");
    scanf("%d", &price);
    topay = calculateprice(price, option);
    printf("Payable amount = %d", topay);
}

int calculateprice(int price, char option)
{
    if(option == 'y')
    {
        if(price > 500)
            return price - (0.20 * price);
        else
            return price - (0.10 * price);
    }
    else
    {
        if(price > 600)
            return price - (0.15 * price);
        else
            return price;
    }
}
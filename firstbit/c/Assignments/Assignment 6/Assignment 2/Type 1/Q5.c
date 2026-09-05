#include <stdio.h>

void calculateprice();

void main()
{
    calculateprice();
}

void calculateprice()
{
    char option;
    int topay;
    int price;
    printf("Are you a student: y/n :- ");
    scanf("%c", &option);
    printf("Enter the price : ");
    scanf("%d", &price);
    if(option == 'y')
    {
        if(price > 500)
        {
            topay = price - (0.20 * price);
        }
        else
        {
            topay = price - (0.10 * price);
        }
    }
    else
    {
        if(price > 600)
        {
            topay = price - (0.15 * price);
        }
        else
        {
            topay = price;
        }
    }

    printf("The payable amount is : %d", topay);
}
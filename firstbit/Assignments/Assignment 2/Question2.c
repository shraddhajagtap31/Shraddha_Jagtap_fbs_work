#include <stdio.h>

void main()
{
    int side1, side2, side3;

    printf("Side1: ");
    scanf("%d", &side1);

    printf("Side2: ");
    scanf("%d", &side2);

    printf("Side3: ");
    scanf("%d", &side3);

    if(side1 == side2 && side2 == side3)
    {
        printf("Equilateral Triangle");
    }
    else
    {
        if(side1 == side2 || side2 == side3 || side1 == side3)
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
}
#include <stdio.h>

int triangle(int a, int b, int c);
void main()
{
    int a, b, c, result;
    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);
    result = triangle(a, b, c);
    if(result == 1)
        printf("Equilateral");
    else if(result == 2)
        printf("Isosceles");
    else
        printf("Scalene");
}

int triangle(int a, int b, int c)
{
    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}
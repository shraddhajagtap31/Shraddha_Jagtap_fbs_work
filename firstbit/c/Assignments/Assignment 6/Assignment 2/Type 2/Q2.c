#include <stdio.h>

int triangle();
void main()
{
    int result;
    result = triangle();
    if(result == 1)
        printf("Equilateral");
    else if(result == 2)
        printf("Isosceles");
    else
        printf("Scalene");
}
int triangle()
{
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}
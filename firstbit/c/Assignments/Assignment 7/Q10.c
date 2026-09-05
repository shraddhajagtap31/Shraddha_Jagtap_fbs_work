#include <stdio.h>

void calculate(int *, int *, char);
void main()
{
    int a, b;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    char oper;

    printf("Enter operator : ");
    scanf(" %c", &oper);

    calculate(&a, &b, oper);
}

void calculate(int *x, int *y, char oper)
{
    int sum, diff, product, div, mod;

    if (oper == '+')
    {
        sum = *x + *y;
        printf("The sum is %d", sum);
    }
    else if (oper == '-')
    {
        diff = *x - *y;
        printf("The diff is %d", diff);
    }
    else if (oper == '*')
    {
        product = *x * *y;
        printf("The product is %d", product);
    }
    else if (oper == '/')
    {
        div = *x / *y;
        printf("The div is %d", div);
    }
    else if (oper == '%')
    {
        mod = *x % *y;
        printf("The mod is %d", mod);
    }
    else
    {
        printf("Invalid operator");
    }
}
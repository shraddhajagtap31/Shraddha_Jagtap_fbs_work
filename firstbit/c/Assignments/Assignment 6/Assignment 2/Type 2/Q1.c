#include <stdio.h>

int calculate();
void main()
{
    int result;
    result = calculate();
    printf("Result = %d", result);
}

int calculate()
{
    int a, b;
    char op;
    int result;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &op);

    if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else if(op == '*')
        result = a * b;
    else if(op == '/')
        result = a / b;
    else
        result = a % b;

    return result;
}
#include <stdio.h>

void calculate(int a, int b, char op);
void main()
{
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter operator: ");
    scanf(" %c", &op);
    calculate(a, b, op);
}

void calculate(int a, int b, char op)
{
    if(op == '+')
        printf("Result = %d", a + b);
    else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else if(op == '%')
        printf("Result = %d", a % b);
    else
        printf("Invalid operator");
}
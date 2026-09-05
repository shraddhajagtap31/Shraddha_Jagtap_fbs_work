#include <stdio.h>

int calculate(int a, int b, char op);
void main()
{
    int a, b, result;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter operator: ");
    scanf(" %c", &op);
    result = calculate(a, b, op);
    printf("Result = %d", result);
}
int calculate(int a, int b, char op)
{
    if(op == '+')
        return a + b;
    else if(op == '-')
        return a - b;
    else if(op == '*')
        return a * b;
    else if(op == '/')
        return a / b;
    else
        return a % b;
}
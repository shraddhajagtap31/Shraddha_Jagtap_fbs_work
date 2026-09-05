#include <stdio.h>

void calculate();
void main()
{
    calculate();
}
void calculate()
{
    int a, b;
    char op;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter operator (+, -, /, *, %%): ");
    scanf(" %c", &op);
    if(op == '+')
    {
        printf("Result = %d", a + b);
    }
    else if(op == '-')
    {
        printf("Result = %d", a - b);
    }
    else if(op == '*')
    {
        printf("Result = %d", a * b);
    }
    else if(op == '/')
    {
        printf("Result = %d", a / b);
    }
    else if(op == '%')
    {
        printf("Result = %d", a % b);
    }
    else
    {
        printf("Invalid operator");
    }
}
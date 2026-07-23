#include <stdio.h>

void main()
{
    float basic_salary, da, ta, hra, total;

    printf("Enter the Basic Salary: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 5000)
    {
        da = (basic_salary * 10) / 100;
        ta = (basic_salary * 20) / 100;
        hra = (basic_salary * 25) / 100;
    }
    else
    {
        da = (basic_salary * 15) / 100;
        ta = (basic_salary * 25) / 100;
        hra = (basic_salary * 30) / 100;
    }

    total = basic_salary + da + ta + hra;
    printf("\nTotal Salary = %.2f", total);
}
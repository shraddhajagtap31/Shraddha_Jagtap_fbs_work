#include <stdio.h>

void Totalsalary(int);

void main()
{
    int basicsalary;
    printf("Enter the salary: ");
    scanf("%d", &basicsalary);
    Totalsalary(basicsalary);
}

void Totalsalary(int basicsalary)
{
    int da, ta, hra;
    int totalsalary;
    if(basicsalary > 5000)
    {
        da = 0.15 * basicsalary;
        ta = 0.25 * basicsalary;
        hra = 0.30 * basicsalary;
    }
    else
    {
        da = 0.10 * basicsalary;
        ta = 0.20 * basicsalary;
        hra = 0.25 * basicsalary;
    }

    totalsalary = basicsalary + da + ta + hra;

    printf("DA = %d\n", da);
    printf("TA = %d\n", ta);
    printf("HRA = %d\n", hra);
    printf("The total salary is: %d", totalsalary);
}
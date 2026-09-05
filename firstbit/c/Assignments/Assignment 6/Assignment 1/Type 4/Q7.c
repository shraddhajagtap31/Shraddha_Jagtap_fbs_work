#include <stdio.h>

int Totalsalary(int);
void main()
{
    int basicsalary;
    int res;
    printf("Enter the basic salary: ");
    scanf("%d", &basicsalary);
    res = Totalsalary(basicsalary);
    printf("Total Salary = %d", res);
}
int Totalsalary(int basicsalary)
{
    int da, ta, hra;
    int totalsalary;
    if(basicsalary <= 5000)
    {
        da = basicsalary * 0.10;
        ta = basicsalary * 0.20;
        hra = basicsalary * 0.25;
    }
    else
    {
        da = basicsalary * 0.15;
        ta = basicsalary * 0.25;
        hra = basicsalary * 0.30;
    }

    totalsalary = basicsalary + da + ta + hra;

    return totalsalary;
}
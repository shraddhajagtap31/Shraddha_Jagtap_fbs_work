#include <stdio.h>

int Totalsalary();
void main()
{
    int result;
    result = Totalsalary();
    printf("Total Salary = %d", result);
}
int Totalsalary()
{
    int basicsalary;
    int da, ta, hra;
    int totalsalary;
    printf("Enter the basic salary: ");
    scanf("%d", &basicsalary);

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
    printf("DA = %d\n", da);
    printf("TA = %d\n", ta);
    printf("HRA = %d\n", hra);

    return totalsalary;
}
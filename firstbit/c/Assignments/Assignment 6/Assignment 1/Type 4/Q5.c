#include <stdio.h>

int Iseligible(int);
void main()
{
    int age;
    int res;
    printf("Enter your age: ");
    scanf("%d", &age);
    res = Iseligible(age);
    if(res == 1)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
}
int Iseligible(int age)
{
    if(age >= 18)
    { 
        return 1;
    }
    else
    {
        return 0;
    }
}
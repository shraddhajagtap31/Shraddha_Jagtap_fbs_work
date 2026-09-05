#include <stdio.h>

int Iseligible();

void main()
{
    int result;

    result = Iseligible();

    if(result == 1)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
}

int Iseligible()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
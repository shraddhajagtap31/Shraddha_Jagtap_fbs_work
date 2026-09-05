#include <stdio.h>

int checkage(int age);
void main()
{
    int age, result;
    printf("Enter age: ");
    scanf("%d", &age);
    result = checkage(age);
    if(result == 1)
        printf("Child");
    else if(result == 2)
        printf("Teenager");
    else if(result == 3)
        printf("Adult");
    else
        printf("Senior");
}
int checkage(int age)
{
    if(age < 12)
        return 1;
    else if(age <= 19)
        return 2;
    else if(age <= 59)
        return 3;
    else
        return 4;
}
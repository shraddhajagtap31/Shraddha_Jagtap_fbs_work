#include <stdio.h>

void sum(int *);
void  main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum(arr);
}
void sum(int *arr)
{
    int i;
    int total = 0;
    for(i = 0; i < 5; i++)
    {
        total = total + arr[i];
    }
    printf("Sum = %d", total);
}
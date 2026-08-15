#include <stdio.h>

void oddeven(int *);
void main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    oddeven(arr);
}
void oddeven(int *arr)
{
    int i;
    printf("Even numbers:");
    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd numbers:\n");
    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
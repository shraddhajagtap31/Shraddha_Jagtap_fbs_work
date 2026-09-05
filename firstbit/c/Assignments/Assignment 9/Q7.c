#include <stdio.h>

void addarray(int *, int *, int *);
void main()
{
    int arr[5];
    int brr[5];
    int crr[5];
    int i;
    printf("Enter elements of first array:");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter elements of second array:");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }
    addarray(arr, brr, crr);
    printf("Third array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }
}

void addarray(int *arr, int *brr, int *crr)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}
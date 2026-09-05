#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr, *brr, *crr;
    int n, i;
    printf("Enter size of arrays: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(n * sizeof(int));
    printf("Enter elements of first array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter elements of second array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }
    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
    printf("Third array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", crr[i]);
    }
}
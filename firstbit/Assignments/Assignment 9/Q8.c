#include <stdio.h>

void merge(int *, int *, int *);
void  main()
{
    int arr[5];
    int brr[5];
    int crr[10];
    int i;
    printf("Enter first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }
    merge(arr, brr, crr);
    printf("Merged array:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }

}
void merge(int *arr, int *brr, int *crr)
{
    int i;
    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }

    for(i = 0; i < 5; i++)
    {
        crr[i + 5] = brr[i];
    }
}
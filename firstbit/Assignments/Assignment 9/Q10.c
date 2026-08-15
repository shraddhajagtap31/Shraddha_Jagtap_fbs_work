#include <stdio.h>

void sort(int *);
void main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr);
    printf("Sorted array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sort(int *arr)
{
    int i, j;
    int temp;
    for(i = 0; i < 4-i; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
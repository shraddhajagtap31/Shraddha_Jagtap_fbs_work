#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr;
    int n, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    printf("Enter the elements in array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
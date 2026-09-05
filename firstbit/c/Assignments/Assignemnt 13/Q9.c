#include <stdlib.h>
#include <stdio.h>

void main()
{
    int *arr;
    int n, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    printf("Enter the elements in array : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nReverse array: ");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
}
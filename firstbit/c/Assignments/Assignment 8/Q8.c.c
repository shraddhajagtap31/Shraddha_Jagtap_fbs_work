#include <stdio.h>

void main()
{
    int i, j;
    int arr1[3];
    int arr2[4];
    int arr3[7];
    printf("Enter elements of arr1:\n");

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of arr2:\n");
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < 3; i++)
    {
        arr3[i] = arr1[i];
    }
    for(j = 0; j < 4; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    printf("Elements of arr3 are:\n");
    for(i = 0; i < 7; i++)
    {
        printf("%d ", arr3[i]);
    }
}
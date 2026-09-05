#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr;
    int n, i,j;
    int count;
    printf("Enter size of array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers are: ");
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d ", arr[i]);
        }
    }
}
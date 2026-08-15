#include <stdio.h>

void minmax(int *);
void main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    minmax(arr);
}

void minimax(int *arr)
{
    int i;
    int min, max;
    min = arr[0];
    max = arr[0];
    for(i = 1; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}
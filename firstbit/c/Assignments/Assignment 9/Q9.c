#include <stdio.h>

void reverse(int *);
void main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr);
    printf("Reverse array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
void reverse(int *arr)
{
    int i;
    int temp;
    for(i = 0; i < 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
}
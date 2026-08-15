#include <stdio.h>

void alternate(int *);
void main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    alternate(arr);
}
void alternate(int *arr)
{
    int i;
    printf("Alternate elements:\n");
    for(i = 0; i < 5; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}
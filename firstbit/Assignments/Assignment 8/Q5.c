#include <stdio.h>

int main()
{
    int arr[6];
    int i;
    printf("Enter 6 elements:\n");
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Alternate elements are: ");
    for(i = 0; i < 6; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
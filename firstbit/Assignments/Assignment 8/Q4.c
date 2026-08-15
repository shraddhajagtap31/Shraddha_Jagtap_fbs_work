#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter arr elements : ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array elements are : ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d Even\n", arr[i]);
        }
        else
        {
            printf("%d Odd\n", arr[i]);
        }
    }

    return 0;
}
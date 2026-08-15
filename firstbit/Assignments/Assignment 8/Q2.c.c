#include <stdio.h>

void main()
{
    int arr[10];
    int i;
    int search;
    int index = -1;

    printf("Enter 10 numbers:\n");
                                                                
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++)
    {
        if(arr[i] == search)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        printf("Element is present at index %d", index);
    }
    else
    {
        printf("Element not found");
    }
}
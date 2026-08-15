#include <stdio.h>

int main()
{
    int arr[6];
    int i, j, count;
    printf("Enter 6 elements:\n");
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers are: ");
    for(i = 0; i < 6; i++)
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

    return 0;
}
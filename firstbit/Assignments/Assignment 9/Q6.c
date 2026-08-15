#include <stdio.h>

void prime(int *);
void main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    prime(arr);
}
void prime(int *arr)
{
    int i, j;
    int count;
    printf("Prime numbers:\n");
    for(i = 0; i < 5; i++)
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
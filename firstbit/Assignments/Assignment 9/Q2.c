#include <stdio.h>

void search(int *, int);
void main()
{
    int arr[5];
    int i, num;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &num);
    search(arr, num);
}
void search(int *arr, int num)
{
    int i;
    int found = 0;
    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            printf("Number found at index %d\n", i);
            found = 1;
        }
    }
    if(found == 0)
    {
        printf("Number not found\n");
    }
}
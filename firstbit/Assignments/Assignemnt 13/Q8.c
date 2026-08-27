#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr;
    int *brr;
    int *crr;
    int n1,n2,i,j;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    arr = (int *)malloc(n1 * sizeof(int));
    brr = (int *)malloc(n2* sizeof(int));
    crr = (int *)malloc(n1+n2* sizeof(int));
    printf("Enter elements of arr:\n");

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter elements of brr:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }
    for(i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }
    for(j = 0; j < n2; j++)
    {
        crr[i] = brr[j];
        i++;
    }
    printf("Elements of crr are:\n");
    for(i = 0; i < n1+n2; i++)
    {
        printf("%d ", crr[i]);
    }
}
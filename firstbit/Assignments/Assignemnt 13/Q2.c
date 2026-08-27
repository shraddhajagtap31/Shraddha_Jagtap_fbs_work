#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n, i, search,index=-1;
    int min, max;
    printf("Enter size of array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&search);
    for(i = 0; i < n; i++){
    	if(arr[i]==search){
    		index = i;
    		break;
		}
	}
	if(index == -1)
    {
    printf("Element not found");
	}
	else
	{
	printf("Element found at index %d", index);
	}
}
    
#include <stdlib.h>
#include <stdio.h>

void main(){
	int *arr;
	int n,i;
	int sum=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);
	printf("Enter the elemets in array :");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Alternate elements are: ");
    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }    	
}
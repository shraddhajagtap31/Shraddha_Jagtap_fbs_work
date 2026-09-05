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
    for(i = 0; i < n; i++)
    {
    	sum=sum+arr[i];
    }
    printf("The sum is : %d",sum);
    
}
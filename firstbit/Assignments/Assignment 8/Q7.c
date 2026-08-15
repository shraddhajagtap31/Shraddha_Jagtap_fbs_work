#include <stdio.h>

int main(){
	int arr[5];
	int brr[5];
	int crr[5];
	int i,j;
	printf("Elements in arr : ");
	for(int i =0;i<5;i++){
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<5;i++){
    	printf("%d ",arr[i]);
    }
    printf("\nElements in brr : ");
    for(int i =0;i<5;i++){
		scanf("%d",&brr[i]);
	}
	for(int i=0;i<5;i++){
    	printf("%d ",brr[i]);
    }
	for(int i=0,j=0;i<5;i++,j++){
		crr[i]=arr[i]+brr[j];
	}
	printf("\nElements of crr are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }
    
    return 0;
}
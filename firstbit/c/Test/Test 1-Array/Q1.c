void main(){
	int arr[5];
	int brr[5];
	int i,j;
	
	printf("Enter elements in arr : ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter elements in brr : ");
	for(i=0;i<5;i++){
		scanf("%d",&brr[i]);
	}
	printf("Common elements are : ");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i]==brr[j]){
				printf("%d ",arr[i]);
			}
		}
	}
	
}
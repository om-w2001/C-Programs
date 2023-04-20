// Sum of array element using recursion
#include<stdio.h>
int sumarr(int arr[],int size){
	if(size==1){
		return arr[size-1];
	}
	return sumarr(arr,size-1)+arr[size-1];
}
void main(){
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the element of array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int y=sumarr(arr,size);

	printf("Sum=%d\n",y);
}

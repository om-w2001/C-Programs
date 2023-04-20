/* Given a sorted array Arr.
 * Find the first occurrence of k.
 * If found then return index else return -1
 */

#include<stdio.h>
int xyz(int arr[],int k,int size){
	int start=0;
	int end=size;
	int mid;
	int store=-1;

	while(start<=end){
		mid=start+end%2;
		if(arr[mid]==k){
			store=mid;
			if(arr[mid-1]!=k){
				return store;
			}
			end =mid-1;
		}
		if(arr[mid]<k){
			start=mid+1;
		}
		if(arr[mid]>k){
			end=mid-1;
		}
	}
	return store;
}

void main(){
	int size;
	int k;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the element of array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to find:");
	scanf("%d",&k);

	int x=xyz(arr,k,size-1);
	if(x!=-1){
	printf("First occurrence of %d on index is  %d\n",k,x);
	}else{
		printf("Element is not found in array\n");
	}
}
				

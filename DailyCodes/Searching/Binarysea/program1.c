#include<stdio.h>
int Binary(int *arr,int size,int key){
	int mid;int start=0;int end=size-1;
	while(start<=end){
		mid=start+end%2;
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]>key){
			end=mid-1;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
	}
	return -1;
}
void main(){
	int size;
	int key;
	printf("Enter the size:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the element:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the key element:\n");
	scanf("%d",&key);

	int x=Binary(arr,size,key);
	if(x==-1){
		printf("Element not present\n");
	}
	else{
		printf("element present at %d\n",x);
	}

}

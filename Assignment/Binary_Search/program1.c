/* 1.Given a sorted arry with DISTINCT element 
    Find the floor of no k in the array.

    floor=>greatest element <=k


   input:Arr[2,3,6,9,11,14,18];

output:
      k=5    floor=3
      k=4    floor=3
      k=6    floor=6

      */

#include<stdio.h>
int xyz(int k,int arr[],int size){
	int start=0;
	int end=size;
	int mid;
	int store=-1;
	 
	while(start<=end){
		mid=start+end%2;
		if(arr[mid]==k){
			return mid;
		}
		if(arr[mid]<k){
			store=arr[mid];
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
	printf("Enter the size of array:");
	scanf("%d",&size);	
	printf("Enter the element of array:");
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
				}
	int k;
	printf("Enter the number we have to find floor:");
	scanf("%d",&k);
	int x=xyz( k , arr ,size-1);

	printf("floor of %d is %d \n",k,x);
}

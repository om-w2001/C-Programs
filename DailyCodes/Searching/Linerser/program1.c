#include<stdio.h>
int ifpresent(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return i;
		}
	}return -1;
}
int lastocc(int arr[],int size,int key){
	int x=-1;
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			x=i;
		}
	}return x;
}
int sec(int arr[],int size,int key){
	int store=-1;int seclast=-1;

	for(int i=0;i<size;i++){
		if(arr[i]==key){
			seclast=store;
			store=i;
		}
	}return seclast;
}
void main(){
	int size;
	int key;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array element:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the key element");
	scanf("%d",&key);

	int x=ifpresent(arr,size,key);
	if(x==-1){
		printf("element is not found\n");
	}else{
		printf("Element is present on %d index\n",x);
	}
	int y=lastocc(arr,size,key);
	if(y==-1){
		printf("Element is not found:\n");
	}else{
		printf("last occ is %d\n",y);
	}
	int z=sec(arr,size,key);
	if(z==-1){
		printf("Element is not found:\n");
	}else{
		printf("secocc is index is %d\n",z);
	}


}

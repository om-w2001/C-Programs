// floor
#include<stdio.h>
int xyz(int *arr,int size,int key){
        int mid;int start=0;int end=size-1;int store=-1;
        while(start<=end){
                mid=start+end%2;
                if(arr[mid]==key){
                        return arr[mid];
                }
                if(arr[mid]>key){
                        end=mid-1;
                }
                if(arr[mid]<key){
			store=arr[mid];
                        start=mid+1;
                }
        }
        return store;
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

        int x=xyz(arr,size,key);
        if(x==-1){
                printf("Element not present\n");
        }
        else{
                printf("element present at %d\n",x);
        }

}

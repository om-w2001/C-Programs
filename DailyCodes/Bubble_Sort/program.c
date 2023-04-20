#include<stdio.h>

void fun(int size ,int arr[]){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void main(){
                                                                                    int size;
										    printf("Enter the size");
	scanf("%d",&size);
	
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size;i++){
                printf("%d\n",arr[i]);

        }
		fun(size,arr);
		printf("\n");
 for(int i=0;i<size;i++){
                printf("%d\n",arr[i]);

        }
	
}

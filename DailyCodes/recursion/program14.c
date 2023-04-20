// Find that char is prasent in array


#include<stdio.h>
int ser(char arr[],int size,char find){
	if(size<=0){
		return -1;
	}
	if(arr[size]==find){
		return size;
	}
	return ser(arr,size-1,find);
}
void main(){
	int size;
	char find;
	printf("Enter the size:\n");
	scanf("%d",&size);
	char arr[size];
	printf("Enter the char:\n");
	for(int i=0;i<size;i++){
		getchar(arr[i]);
	}
	printf("Enter the find char:");
	scanf("%c",&find);
	int x=ser(arr,size-1,find);
	if(x==-1){
		printf("char is not present\n");
	}
	else{
		printf("char is present in %d index\n",x);
	}
}

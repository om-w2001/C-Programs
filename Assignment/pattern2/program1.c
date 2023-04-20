/* 1. take no of rows from the user
4 3 2 1
5 4 3 2
6 5 4 3
7 6 5 4  */



#include<stdio.h>
void main(){
	int x,i=0,j;
	printf("Enter the row:");
	scanf("%d",&x);
	for(i=0;i<=x-1;i++){
		for(j=x;j>=1;j--){
			printf("%d ",i+j);
		}
		printf("\n");
	}
}


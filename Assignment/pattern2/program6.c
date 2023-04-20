/* 6. take no of rows from the user
= = = =
$ $ $ $
= = = =
$ $ $ $ */





#include<stdio.h>
void main(){
	int x;
	printf("Enter the value of row :");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=4;j++){
		if(i%2==0){
			printf("$ ");
		}
		else{
			printf("= ");
		}
		}
		printf("\n");
	}
}

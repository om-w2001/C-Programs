/* 6. If possible take no of rows from the user
$ = $ =
$ = $ =
$ = $ =
$ = $ = */



#include<stdio.h>
void main(){
	int row;
	printf("Enter the value of row:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=4;j++){
			if(j%2==0){
				printf("= ");
			}
			else{
				printf("$ ");
			}
		}
		printf("\n");
	}
}

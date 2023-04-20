/* 1. If possible take no of rows from the user
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7  */



#include<stdio.h>
void main(){
	int row,i,j;
	printf("Enter the number of row");
	scanf("%d",&row);
	for(i=0;i<=row-1;i++){
		for(j=1;j<=row;j++){
			printf("%d ",i+j);
		}
		printf("\n");
	}
}

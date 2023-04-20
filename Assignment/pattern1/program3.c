/* 3. If possible take no of rows from the user
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4 */


#include<stdio.h>
void main(){
	int row;
	printf("Enter the value of row");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}

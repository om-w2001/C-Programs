/* 9. take no of rows from the user
1 3 8
15 24 35
48 63 80 */




#include<stdio.h>
void main(){
	int x,y=1;
	printf("Enter the value of row:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){ 
		for(int j=1;j<=3;j++){
			printf("%d ",y*y-1);
			y++;
		}
		printf("\n");
	}
}

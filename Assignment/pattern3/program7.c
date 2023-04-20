/* 7. take no of rows from the user
1 4 27
4 27 16
27 16 125 */



#include<stdio.h>
void main(){
	int x;
	printf("Enter the row:");
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		int y=1+i;
		for(int j=1;j<=x;j++){
			if(y%2==0){
				printf("%d ",y*y);
			}
			else{
				printf("%d ",y*y*y);
			}
			y++;
		}
	
		printf("\n");
	}
}

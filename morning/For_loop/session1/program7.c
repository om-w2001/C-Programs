#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	int y=x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=4;j++){
			printf("%d ",y);
		}
		printf("\n");
		y--;
	}
}

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	int y=x*x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",y);
			y--;
		}
		printf("\n");
	}
}

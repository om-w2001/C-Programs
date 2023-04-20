/* 8. take no of rows from the user
18 16 14
12 10 8
6 4 2 */



#include<stdio.h>
void main(){
	int x;
	printf("Enter the value of row:");
	scanf("%d",&x);
	int y=x*x*2;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			printf("%d ",y);
			y=y-2;
                             
		}
		printf("\n");
	}
}


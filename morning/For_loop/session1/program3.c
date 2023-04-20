#include<stdio.h>
void main(){
	int x;
	printf("Enter the rows:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
			printf("* ");
		}
		printf("\n");

	}
}

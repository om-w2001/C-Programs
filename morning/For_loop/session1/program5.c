#include<stdio.h>
void main(){
	int x;
	char ch='a';
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
			printf("%c ",ch++);
		}
		printf("\n");
	}
}

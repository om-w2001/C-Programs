#include<stdio.h>
void main(){
	int x,y,z=1;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	printf("Enter the COL:");
	scanf("%d",&y);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			printf("%d ",z++);
		}
		printf("\n");
	
	}
}

#include<stdio.h>
void main(){
	int x,y=1,z=0;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
				printf("%d ",y+z);
				y++;
				z++;
		}
		printf("\n");
	}
}

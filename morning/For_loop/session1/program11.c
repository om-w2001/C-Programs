#include<stdio.h>
void main(){
	int x,y=1;
	char ch='a';
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=4;j++){
			if(i%2==0){
				printf("%c ",ch);
				ch++;
			}
			else {
				printf("%d ",y);
				y++;
			}
		}
		printf("\n");
	}
}

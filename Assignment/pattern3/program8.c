/* 8. take no of rows from the user
16 15 14 13
L K J I
8 7 6 5
D C B A */




#include<stdio.h>
void main(){
	int x;
	printf("Enter the row:");
	scanf("%d",&x);
	int y=1+x*x-1;
                char ch='A'+x*x-1;

	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			if(i%2==0){
				printf("%c ",ch);
			}
			else{
				printf("%d ",y);
			}
			ch--;
			y--;
		}
		printf("\n");
	}
}

/* 
7. take no of rows from the user
1 2 3 4
25 36 49 64
9 10 11 12
169 196 225 256 
*/


#include<stdio.h>
void main(){
	int x,y=1;
	printf("Enter the value of row:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=4;j++){
			if(i%2==0){
			printf("%d ",y*y);
			}
			else{
				printf("%d ",y);
			}
			y++;
		}
		printf("\n");
	}
}

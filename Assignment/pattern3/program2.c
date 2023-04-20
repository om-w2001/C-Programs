/* 2. take no of rows from the user
3 b 1 d
a 2 c 0
3 b 1 d
a 2 c 0 */




#include<stdio.h>
void main(){
	int x;
	printf("Enter the row:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		char ch='a';
		int y=x-1;
		for( int j=1;j<=x;j++){
			if(i%2==1){
			if(j%2==0){
				printf("%c ",ch);
		
			}
			else{
				printf("%d ",y);
			}
			ch++;
			y--;
			}
			else{
				if(j%2==0){
					printf("%d ",y);
				}
				else{
					printf("%c ",ch);
				}
				ch++;
				y--;
			}
		}
		printf("\n");
	}
}

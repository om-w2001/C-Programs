/* 3. take no of rows from the user
4 a 3 b
4 a 3 b
4 a 3 b
4 a 3 b */








#include<stdio.h>
void main(){
	int x;
	printf("Enter the row:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		char ch='a';
		int y=x;
		for(int j=1;j<=x;j++){
			if(j%2==0){
				printf("%c ",ch);
				ch++;
			}
			else{
				printf("%d ",y);
				y--;
	
			}
		}
		printf("\n");
	}
}

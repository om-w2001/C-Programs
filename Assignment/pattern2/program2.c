/* 2. take no of rows from the user
3 2 1
c b a
3 2 1
c b a  */



#include<stdio.h>
void main(){
	int x;
	printf("Enter the row:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		char ch='a'+x-1;
		for(int j=x;j>=1;j--){
			if(i%2==0){
				printf("%c ",ch);
			}
			else{
				printf("%d ",j);
			}
			ch--;
		}
		printf("\n");
	}
}

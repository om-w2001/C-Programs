/* 2. If possible take no of rows from the user
1 2 3
a b c
1 2 3
a b c  */




#include<stdio.h>
void main(){
	int row;
	printf("Enter the value of row");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
	char ch='A';
		for(int j=1;j<=3;j++){
			if(i%2==0){
				printf("%c ",ch);
				ch++;
			}
			else {
				printf("%d ",j);
			}
			
		}
		printf("\n");
	}
}
			

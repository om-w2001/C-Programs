/* 4. If possible take no of rows from the user
A B C
D E F
G H I  */


#include<stdio.h>
void main(){
	int row;
	char ch='A';
	printf("Enter the the value of row:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=3;j++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
	

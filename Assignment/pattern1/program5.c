/* 5. If possible take no of rows from the user
A B C D
B C D E
C D E F
D E F G  */




#include<stdio.h>
void main(){
	int i,j,row;
	char ch='A';
	printf("Enter the value of row:");
	scanf("%d",&row);
	for(int i=0;i<=row-1;i++){
		for(j=1;j<=row;j++){
	               
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
		ch=ch-3;
	}
}


/* 4. take no of rows from the user
I H G
F E D
C B A */




#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROW");
	scanf("%d",&x);
	char ch='A'+x*x-1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}

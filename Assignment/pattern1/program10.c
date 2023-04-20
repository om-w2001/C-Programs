/* 10. If possible take no of rows from the user
D4 C3 B2 A1
D4 C3 B2 A1
D4 C3 B2 A1
D4 C3 B2 A1  */



#include<stdio.h>
void main(){ 
	int row;
	printf("Enter the value ROW:");
	scanf("%d",&row);
	for(int i=row;i>=1;i--){
		char ch='A'+row-1;
		for(int j=row;j>=1;j--){
			printf("%c%d ",ch,j);
			ch--;
			}
		printf("\n");
	}
}


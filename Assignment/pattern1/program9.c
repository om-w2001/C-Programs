/* 9. If possible take no of rows from the user
2 5 10
17 26 37
50 65 82 */




#include<stdio.h>
void main(){
	int row,z=1,x=1;
	printf("Enter the value row:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",z*z+x);
			z++;
		}
		printf("\n");
	}
}


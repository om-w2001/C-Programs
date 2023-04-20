/* 8. If possible take no of rows from the user
1 3 5
7 9 11
13 15 17  */



#include<stdio.h>
void main(){
	int row,z=1,j,x;
	printf("Enter the value the ROW:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=3;j++){
			printf("%d ",z+x);
			z++;
			x++;
		}
		
		printf("\n");
	}
}


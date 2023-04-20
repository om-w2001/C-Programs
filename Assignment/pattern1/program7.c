/* 7. If possible take no of rows from the user
1 2 9 4
25 6 49 8
81 10 121 12
169 14 225 16  */




#include<stdio.h>
void main(){
	int row,j,z=1;
	printf("Enter the value of ROW:");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=4;j++){
			if(j%2==0){
				printf("%d  ",z);
			}
			else{
				printf("%d  ",z*z);
			}
			z++;
		}
		printf("\n");
	}
}


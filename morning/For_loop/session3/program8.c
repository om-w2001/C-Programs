/*  Take no of rows from the user     ROWS=4
      1
      2 4
      3 6 9
      4 8 12 16
       */
#include<stdio.h>
void main(){
	int x;
	int num1=1;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num2=1;
		for(int j=1;j<=i;j++){
			printf("%d ",num1*num2);
			num2++;
		}
		num1++;
		printf("\n");
	}
}

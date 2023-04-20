/*  Take no of rows from the user     ROWS=4
    1
    2 2
    3 3 3
    4 4 4 4
    */

#include<stdio.h>
void main(){
	int x;
	int num=1;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
	           for(int j=1;j<=i;j++){
			   printf("%d ",num);
		   }
		   num++;
		   printf("\n");
	}
}
	


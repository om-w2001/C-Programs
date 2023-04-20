/* Take no of rows from the user  ROWS=4 
                  *
		 * *
		* * *
	       * * * *

	      */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the rows:");
	scanf("%d",&x);

	for(int i=1;i<=x;i++){
		for(int j=x;j>i;j--){
			printf("  ");
		}
		for(int z=1;z=2*i-1;z++){
			printf("* ");
		}
		printf("\n");
	}
}

/* Take no of rows from the user ROWS=3
   1 2 3 4 
     5 6 7
       8 9 
         10

	 */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the rows:");
	scanf("%d",&x);
	int num=1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<i;j++){
			printf("  ");
		}
		for(int z=i;z<=x;z++){
			printf("%d ",num++);
		}
		printf("\n");
	}
}

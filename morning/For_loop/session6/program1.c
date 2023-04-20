/* Take no of rows from the user ROWS=3
    * * * *
      * * *
        * *
          *
*/

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<i;j++){
			printf("  ");
		}
		for(int z=i;z<=x;z++){
			printf("* ");
		}
		printf("\n");
	}
}

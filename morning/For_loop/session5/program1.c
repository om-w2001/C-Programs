/* Take no of rows from the user  ROWS=4
              1
	    1 2
	  1 2 3
	1 2 3 4

*/

#include<stdio.h>
void main(){
	int x;
	printf("Emter the rows:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num=1;
		for(int j=x-1;j>=i;j--){
			printf("  ");
		}
		for(int z=1;z<=i;z++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}

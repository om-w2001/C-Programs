/* Take no of rows from the user ROWS=4
                    4
		  4 3
		4 3 2
	      4 3 2 1
	      */
#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num=1+x-1;
		for(int j=x-1;j>=i;j--){
			printf("  ");
		}
		for(int z=1;z<=i;z++){
			printf("%d ",num);
			num--;
		}
               printf("\n");
	}
}


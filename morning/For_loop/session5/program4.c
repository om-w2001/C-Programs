/* Take no of rows from the user ROWS=3
           1
	 4 7
    10 13 16
    rows=4

                 1
	       5 9
	   13 17 21
	25 29 33 37

	*/

#include<stdio.h>
void main(){
	int x;
	int num=1;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=x-1;j>=i;j--){
			printf("  ");
		}
		for(int z=1;z<=i;z++){
			printf("%d ",num);
			num=num+x;
		}
		printf("\n");
	}
}


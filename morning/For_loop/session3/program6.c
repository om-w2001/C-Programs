/* Take no of rows from the user     ROWS=4
  4 
  3 3
  2 2 2
  1 1 1 1



  */
#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	int num=1+x-1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",num);
		}
		num--;
		printf("\n");
	}
}

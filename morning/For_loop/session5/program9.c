/* Take no of rows & col from the user   ROWS & col =4
        4
      3 6
    2 4 6
  1 2 3 4

  */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	int num=1+x-1;
	for(int i=1;i<=x;i++){
		for(int j=x-1;j>=i;j--){
			printf("  ");
		}
		for(int z=1;z<=i;z++){
			printf("%d ", num);

		}
		printf("\n");
	}
}



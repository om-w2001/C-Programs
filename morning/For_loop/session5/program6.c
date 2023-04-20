/* Take no of rows from the user  ROWS=5
           5
         5 6 
       5 4 3
     5 6 7 8     
   5 4 3 2 1
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
			if(i%2==0){
				printf("%d ",num);
				num++;
			}
			else{
				printf("%d ",num);
				num--;
			}
		}
		printf("\n");
	}
}

/* Take no of rows from the user ROWS=4
           d
	 c c
       b b b
     a a a a

     */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	char ch='a'+x-1;
	for(int i=1;i<=x;i++){
		for(int j=x-1;j>=i;j--){
			printf("  ");
		}
		for(int z=1;z<=i;z++){
			printf("%c ",ch);
		}
		ch--;
		printf("\n");
	}
}

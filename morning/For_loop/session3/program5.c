/* Take no of rows from the user     ROWS=4
     a
     b c 
     d e f
     g h i j


     */

#include<stdio.h>
void main(){
	int x;
	char ch='a';
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}

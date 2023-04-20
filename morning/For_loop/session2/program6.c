/*Take no of rows from the user ROWS=4
   D D D D
   C C C C
   B B B B
   A A A A
   */
#include<stdio.h>
void main(){
	int x;
	printf("Enter the rows:");
	scanf("%d",&x);
	char ch='A'+x-1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=4;j++){
			printf("%c ",ch);
			
		}
		ch--;
		printf("\n");
	}
}


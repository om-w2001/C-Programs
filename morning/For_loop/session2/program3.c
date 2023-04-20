/* Tack no of rows from the user 
   Input ROWS=4
  d d d d
  c c c c
  b b b b
  a a a a
 

*/


#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	char ch='a'+3;
	for(int i=1;i<=x;i++){
		for (int j=1;j<=4;j++){
			printf("%c ",ch);
		}
		printf("\n");
		ch--;
	}
}


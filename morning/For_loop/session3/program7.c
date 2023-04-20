/* Take no of rows from the user     ROWS=4
    c
    b b
    a a a

      */
#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	char ch='a'+x-1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",ch);
		}
		ch--;
		printf("\n");
	}
}

/* Take no of Rows from the user     ROWS=3
    a B c
    d E f
    g H i
    */

#include<stdio.h>
void main(){
	int x;
	char ch1='a';
	char ch2='A';
	printf("Enter the ROW:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
			if(j%2==0){
				printf("%c ",ch2);
			}
			else {
				printf("%c ",ch1);
			}
			ch1++;
			ch2++;
		}
		printf("\n");
	}
}


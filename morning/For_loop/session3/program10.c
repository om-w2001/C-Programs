/* Take no of rows from the user     ROWS=4
         10
	 I H
	 7 6 5
	 D C B A

	 */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the Rows:");
	scanf("%d",&x);
	int num=5
	char ch='A'+x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0){
				printf("%c ",ch);
			}
			else{
				printf("%d ",num);
			}
			ch++;
			num++;
		}
		printf("\n");
	}
}

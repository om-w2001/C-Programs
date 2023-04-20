/* Take no of rows from the user 
  Input ROWS=3;
 1 4 7
 10 13 16
 19 22 25

*/



#include<stdio.h>
void main(){
	int x;th
	int y=1;
	int num=0;
	printf("Enter the ROW:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
		printf("%d ",y+num);
		num=num+2;
		y++;
		
	         }
		printf("\n");
	}
}


/* Take no of rows from the user     ROWS=3
     3
     6 9
     12 15 18
 
     ROWS=4
       
     4
     8 12 
     16 20 24
     28 32 36 40
      
     */


#include<stdio.h>
void main(){
	int x;
	int num=1;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",x*num);
			num++;
		}
		printf("\n");
	}
}
       


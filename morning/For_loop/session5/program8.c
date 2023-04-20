/* Take the no of rows from the user ROWS=4
         1
       A b
     1 2 3
   A b C d
          
   */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=x-1;j>=i;j--){
			printf("  ");
		}
		int num=1;
		char ch1='A';
		char ch2='a';
		for(int z=1;z<=i;z++){
			if(i%2==0){
				if(z%2==0){
			printf("%c ",ch2);
			}
				else{
					printf("%c ",ch1);
				}
			}
			else{
				printf("%d ",num);
			}
			num++;
			ch1++;
			ch2++;
		}
		printf("\n");
	}
}

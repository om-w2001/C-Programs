/*Tack no of rows from the user ROWS =3
 A b C 
 d E f
 G h I
 */
#include<stdio.h>
void main(){
	int x;
	char ch1='A';
	char ch2='a';
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
			if(j%2!=0){
				if(i%2!=0){
				printf("%c ",ch1);
				
				}
				else{
					printf("%c ",ch2);
				}
			}
			else{
				if(i%2==0){
					printf("%c ",ch1);
				}
				else{
					printf("%c ",ch2);
				}
			}
			ch1++;
			ch2++;
		}
		printf("\n");
	}
}



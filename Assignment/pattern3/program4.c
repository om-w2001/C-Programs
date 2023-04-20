/* 4. take no of rows from the user
a B c D
b C d E
c D e F
d E f G */



#include<stdio.h>
void main(){
	int x;
	printf("Enter the row");
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		char ch1='a';
			char ch2='A';
		for (int j=1;j<=x;j++){
			if(j%2==0){
				printf("%c ",ch2+i);
			}
			else{
				printf("%c ",ch1+i);
			}
			ch1++;
			ch2++;
		}
		printf("\n");
	}
}

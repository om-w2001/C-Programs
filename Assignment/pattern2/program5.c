/* 5. take no of rows from the user
D C B A
e d c b
F E D C
g f e d */



#include<stdio.h>
void main(){
	int x;
	printf("Enter the value of row");
	scanf("%d",&x);
	char ch='A'+x*x-1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			if(i%2==0){
			printf("%c ",ch);
			ch--;
			}
		}
		printf("\n");
	}
}

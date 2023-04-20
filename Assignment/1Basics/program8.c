/* 8. Write a program to print a table of 11 in reverse order */



#include<stdio.h>
void main(){
	int x;
	printf("Enter the value table:");
	scanf("%d",&x);
	for(int i=10;i>=1;i--){
		printf("%d\n",x*i);
	}
}

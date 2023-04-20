/* 10. Write a program to print the product of the first 10 numbers */
 
#include<stdio.h>
void main(){
	int x;
	int pro=1;
	printf("Enter the number:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		pro=pro*i;
	}
	printf("The product of first %d numbers is %d",x,pro);
}




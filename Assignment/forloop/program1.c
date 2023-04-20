/* 1. WAP a program to see a given number is a multiple of 3 */






#include<stdio.h>
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	if(x%3==0){
		printf("Give number is multiple of 3\n");
	}
	else{
		printf("Give number is not multiple of 3\n");
	}
}

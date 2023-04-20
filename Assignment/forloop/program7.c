/* 7. WAP to calculate the LCM of given two numbers. */



#include<stdio.h>
void main(){
	int x,y,flag=0;
	printf("Enter the first number:");
	scanf("%d",&x);
	printf("Enter the second number:");
	scanf("%d",&y);
	for(int i=1;i<=100;i++){
		if(i%x==0 && i%y==0){
			printf("%d\n",i);
			break;
		}
	}
}

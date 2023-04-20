/* 5. WAP to take the Number input and print all the factors of that number */




#include<stdio.h>
void main(){
	int x;
	printf("Enter the Input number:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		if(x%i==0){
			printf("%d ",i);
		}
	}
}

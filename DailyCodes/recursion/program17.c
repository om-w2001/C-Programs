// number reverse without recursion
/*
#include<stdio.h>
void num(int n){
	while(n){
		int ret=n%10;
		n=n/10;
		printf("%d",ret);
	}
	printf("\n");
}
void main(){
	int x;
	printf("enter the number:");
	scanf("%d",&x);
	num(x);
}

*/

#include<stdio.h>
int num(int n){
	if(n!=0){
		printf("%d",n%10);
		return num(n/10);
	}
	else{
		return 0;
	}
}
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	num(x);
}

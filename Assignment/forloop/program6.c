/* 6. WAP to calculate the factorial of a given number. */



#include<stdio.h>
void main(){
	int x,ans=1;
	printf("Enter the number:");
	scanf("%d",&x);
	for(int i=x;i>=1;i--){
		ans=ans*i;
	}
	printf("%d",ans);
}

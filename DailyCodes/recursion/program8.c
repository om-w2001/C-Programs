#include<stdio.h>
int sum(int x){
	if(x==1){
		return 1;
	}
	return sum(x-1)+x;
}
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int y=sum(x);
	printf("%d is sum of element\n",y);
}

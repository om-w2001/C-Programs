#include<stdio.h>
int fun(int x){
	if(x<=1){
		return 1;
	}
	return x+fun(x-1)+fun(x-2);
}
void main(){
	int z;
	printf("Enter the number:");
	scanf("%d",&z);
	int y=fun(z);
	printf("ANS==%d\n",y);
}

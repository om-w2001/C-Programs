/* 4. WAP to Find the sum of numbers that are divisible by 5 in the given range */





#include<stdio.h>
void main(){
	int x,y,add=0;
	printf("Enter the starting point:");
	scanf("%d",&x);
	printf("Enter the ending point:");
	scanf("%d",&y);
	for(int i=x; i<=y;i++){
		if(i%5==0){
			add=add+i;
		}
	}
	printf("%d",add);
}


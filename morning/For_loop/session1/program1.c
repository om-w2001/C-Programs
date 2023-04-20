#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the starting number:");
	scanf("%d",&x);
	printf("Enter the ending number:");
	scanf("%d",&y);
	for(int i=x;i<=y;i++){
		if(i%2!=0){
			printf("%d\t",i*i);
		}
	}
}

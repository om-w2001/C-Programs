#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the staring number:");
	scanf("%d",&x);
	printf("Enter the ending number:");
	scanf("%d",&y);
	for(int i=y;i>=x;i--){
		if(i%3==0 && i%7==0){
			printf("%d\t",i);
		}
	}
}

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	int num=x*x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=3;j++){
			if(num%2==0){
				printf("%d ",num*num);
			}
			else {
				printf("%d ",num);
			}
			num--;
		}
		printf("\n");
	}
}


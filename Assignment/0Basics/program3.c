/* Program 3: WAP to find max among 2 numbers. Take all the values from the
user
Input : 2 4
Output: 4 */










#include<stdio.h>
void main(){
	int x,y;
	printf("enter the value x=");
	scanf("%d",&x);
	printf("enter the value y=");
        scanf("%d",&y);

	if (x<y){
		printf("%d\n",y);
	}
	if(y<x){
		printf("%d\n",x);
	}
}

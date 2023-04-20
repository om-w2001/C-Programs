#include<stdio.h>
void main(){
	int x=10;

	printf("%d\n",x); //10

	int *ptr=&x;

	printf("%d\n",*ptr); //10
	*ptr=30;

	printf("%d\n",*ptr);  //30
}

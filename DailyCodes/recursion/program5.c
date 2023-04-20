#include<stdio.h>
void fun(int x){
	if(x!=0){
		printf("Hello\n");
		fun(--x);
	}
	printf("bye\n");
}
void main(){
	fun(5);
}


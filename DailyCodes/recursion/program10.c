#include<stdio.h>
int fun(int x){
	if(x<=1){
		return 1;
	}
	int y=fun(x-1);
	int z=fun(x-2);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
}
void main(){
	fun(5);
}

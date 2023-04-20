#include<stdio.h>
int fun(int x){
	static int sum=0;
	if(x!=0){
		sum=sum+x;
		fun(--x);
	}
	return sum;
}
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int sum=fun(x);
	printf("sum of number is %d\n",sum);

}

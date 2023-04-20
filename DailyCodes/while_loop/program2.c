/* print  the reverse of number of given input */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int ren;
	while(x!=0){
		ren=x%10;
		printf("%d\n",ren);
		x=x/10;
	}
}

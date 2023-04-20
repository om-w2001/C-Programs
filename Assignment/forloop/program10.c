/* 10. WAP to print the numbers in a given range and their multiplicative inverse.
Suppose x is a number then its multiplicative inverse or reciprocal is 1/x.
The expected output for range 1 - 5
1 = 1
2 = 1/2 i.e 0.5
3 = 1/3 i.e 0.33
4 = 0.25
5 = 0.20
*/




#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the output rang:");
	scanf("%d %d",&x,&y);
	for(int i=x;i<=y;i++){
		z=1/i;
		printf("%d\n",z);
	}

}

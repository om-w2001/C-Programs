/* program 1:
Write a program to print the value and size of the below variables.Take all
the values from the user
               num=10
               chr = ‘S’
               rs = 55.20
               crMoney = 542154313480.54454 */









#include<stdio.h>
void main(){
	int num;
	char chr;
	float rs;
	double crMoney;

	printf("Enter the value of num=");
	scanf("%d",&num);

	 printf("Enter the value of chr=");
        scanf(" %c",&chr);

	 printf("Enter the value of rs=");
        scanf("%f",&rs);

	 printf("Enter the value of crMoney=");
        scanf("%lf",&crMoney);
}

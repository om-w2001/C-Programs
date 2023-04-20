/* Program 5: WAP to take numerical input from the user and find whether the number is
divisible by 5 and 11. Take all the values from the user
Input: 55
Output: 55 is divisible by 5 & 11
Input: 15
Output: 15 is not divisible by 5 & 11 */







#include<stdio.h>
void main(){
        int num;
        printf("enter the value num=");
        scanf("%d",&num);


        if (num%5==0 && num %11==0 ){
	        
		printf(" is divisible by 5 & 11");
        }
	else
{
		printf(" is not divisible by 5 & 11");
        }
}


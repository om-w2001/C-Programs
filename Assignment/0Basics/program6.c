/* Program 6:
Write a program to check if a number is even or odd. Take all the values
from the user
Input: var=10;
Output: 10 is an even no
Input: var=37;
Output: 37 is an odd no */







#include<stdio.h>
void main(){
        int var;
        printf("enter the value var=");
        scanf("%d",&var);
       

        if (var%2==0){
                printf("%d",var);
		printf(" is an even no"); 
        }
	else{
                printf("%d",var);
		printf(" is an odd no");
        }
}


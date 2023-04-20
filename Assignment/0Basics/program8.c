/* Program 8: Write a program, take a character and print whether it is in
UPPERCASE or lowercase. Take all the values from the user
Input: var = A
Output: You entered the UPPERCASE character. */







#include<stdio.h>
void main(){
        char var;
        printf("enter the value var=");
	scanf("%c\n",&var);
	if( var >='A' && var <= 'Z')
	{ printf("you enter the UPPERCASE character");
	}
	if( var >='a' && var <='z')
	{ printf("you enter the LOWERCASE charavter");
	}
}
   

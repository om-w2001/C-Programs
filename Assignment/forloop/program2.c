/* 2. WAP to print the character whose ASCII is even */


#include<stdio.h>
void main(){
	for(int i=65;i<=90;i++){
		if(i%2==0){
		printf("%c=%d\n",i,i);
	}
	}
}

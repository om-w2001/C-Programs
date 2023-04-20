/* Number of stack push in process */
#include<stdio.h>
void fun(){
	static int x=0;
	printf("%d\n",++x);   //523738
	fun();
}
void main(){
	fun();
}

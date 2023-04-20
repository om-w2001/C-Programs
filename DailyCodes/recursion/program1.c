/* sudo code it give segmrntion fault becuse in recursion we donot give condition to stop */
#include<stdio.h>
void fun(){
	printf("In fun\n");
	fun();
}
void main(){
	fun();
}


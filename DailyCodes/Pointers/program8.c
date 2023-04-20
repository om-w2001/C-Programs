/* Take a array print the element in it by using  pointer and change the second element 20 to 70 */

#include<stdio.h>
void main(){
	int arr[]={10,20,30,40,50};

	int *ptr=&arr[0];

	printf("%d\n",*ptr);
	ptr++;

	*ptr=70;

	for(int i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");

	for(int j=0;j<5;j++){
		printf("%d\n",*(arr+j));
	}
}




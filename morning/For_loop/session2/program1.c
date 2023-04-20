/* Wap to print th odd number as it is and cude of even numbers between a given range from the user
    Input: Enter Start 10
           Enter End 20
	    Output 1000 11 1728 13 2744 15 4096 17 5832 19 8000
*/

#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the start number:");
	scanf("%d",&x);
	printf("Enter the ending number:");
	scanf("%d",&y);
	for(int i=x;i<=y;i++){
		if(i%2==0){
			printf("%d\t",i*i*i);
		}
		else{
			printf("%d\t",i);
		}
	}
}

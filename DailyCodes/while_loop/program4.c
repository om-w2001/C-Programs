/* write a cprogram which takes a number as input from user if number is even print that number in reverse order to 1 and if the number is odd print that number in reverse order by difference two to 1 
              input  : 6
              output : 6 5 4 3 2 1
               input : 7
              output : 7 5 3 1

	      */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the input:");
	scanf("%d",&x);
	while(x!=0){
		if(x%2==0){
			printf("%d\t",x);
		}
		else{
			if(x%2!=0){
				printf("%d\t",x);
			}
		}
		x--;
	}
}

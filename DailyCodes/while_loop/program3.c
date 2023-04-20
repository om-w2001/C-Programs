/* WAP to print the countdown of days to submit the assignment 
      input =7
      output: 7 days remanining
              6 days remanining
	      5 days remanining
	      4 days remanining
	      3 days remaining
	      2 days remaining
	      1 days remaining
	      0 due date

        */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the value of x=");
	scanf("%d",&x);
	while(x!=0){
		printf("%d days remaining\n",x);
		x--;
	}
	if(x==0){
		printf("%d due date",x);
	}
}


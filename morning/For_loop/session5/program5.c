/* Take no of rows from the user    ROWS=4
                    D
		  c D
	        B c D
	      a B c D

	      */

#include<stdio.h>
void main(){
	int x;
	printf("Enter the ROWS:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		char ch1='A';
		char ch2='a';
		for(int j=x-1;j>=i;j--){
			printf("  ");
			ch1++;
			ch2++;
		}
		for(int z=1;z<=i;z++){
			if(i%2==0){
			if(z%2==0){
			printf("%c ",ch1);
			}
			else{
				printf("%c ",ch2);
			}
			}
			else{
				if(z%2!=0){
                        printf("%c ",ch1);
                        }
                        else{
                                printf("%c ",ch2);
                        }
			}

			ch1++;
			ch2++;
		
		}
		printf("\n");
	}
}


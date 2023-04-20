/* WAP print the number divide by 4 and 5
 */


#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the start number:");
	scanf("%d",&x);
	printf("Enter the end number:");
	scanf("%d",&y);
	int i=x;
	while(i<=y){
		if(i%4==0){
			printf("%d\n",i);
		}
		if(i%5==0){
			printf("%d\n",i);
		}
		i++;
	}
}


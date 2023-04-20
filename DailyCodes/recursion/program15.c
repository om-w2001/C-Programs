// Count number of Zero without rescursion



/*
#include<stdio.h>
void main(){
	long int x;
	printf("Enter the number:");
	scanf("%ld",&x);
	int y=zero(x);
	printf("Zreo is present %d time\n",y);
}
int zero(long int x){
	int count=0;
	while(x){
		if(x%10==0){
			count++;
		}
		x=x/10;
	}
	return count;
}
*/

// count number of Zero in number

#include<stdio.h>
int zero( long int x,int count){
        if(x%10==0){
                count++;
        }
        if(x==0){
                return count;
             }
        x=x/10;
        return zero(x,count);
}
void main(){
	long  int x;
	int count=0;
	printf("Enter the Number:");
	scanf("%ld",&x);
	int y=zero(x,count);

	printf("Zero is present %d time\n",y);
}


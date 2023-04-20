/* WAP to printf thr addition of factorials of two given number from user 
   Input: num1=4         //24
          num2=5         //120
   output:
Addition of factorials of 4 and 5 is 144 
  24+120=144 write proper code

  */
#include<stdio.h>
void main(){
int x;
int z;
        long store=1;
	long store2=1;
	printf("num1=");
	scanf("%d",&x);
        printf("num2:");
        scanf("%d",&z);
        int y=x;
        while(y>=1){
                store=store*y;
                y--;
        }
	int w=z;
	while(w>=1){
		store2=store2*w;
		w--;
	}
	printf("Addition of factorials of %d and %d is %ld",x,z,store+store2);

      
}

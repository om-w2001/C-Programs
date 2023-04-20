/* WAP to count digits i given number */

#include<stdio.h>
void main(){
        int x,count;
        printf("Enter the input=");
        scanf("%d",&x);
        while(x!=0){
                x=x/10;
                count++;
        }
        printf("%d\n",count);
}


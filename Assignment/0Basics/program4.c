/* Program 4: WAP to find min among 2 numbers. Take all the values from the user
Input : 2 3
Output: 2 */













#include<stdio.h>
void main(){
        int x,y;
        printf("enter the value x=");
        scanf("%d",&x);
        printf("enter the value y=");
        scanf("%d",&y);

        if (x>y){
                printf("%d\n",y);
        }
        if(y>x){
                printf("%d\n",x);
        }
}


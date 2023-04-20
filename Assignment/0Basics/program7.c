/* Program 7:
Write a program, take a number and print whether it is less than 10 or greater
than 10. Take all the values from the user
Input: var=5
Output: 5 Is Less than 10.
Input: var=16
Output: 16 Is greater than 10. */






#include<stdio.h>
void main(){
        int var;
        printf("enter the value var=");
        scanf("%d",&var);


        if (var<10){
                printf("%d",var);
                printf(" is less than 10 ");
        }
        if (var>=10){
                printf("%d",var);
                printf(" is grater than 10");
        }
}



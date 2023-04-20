/* 10. take no of rows from the user
D4 C3 B2 A1
A1 B2 C3 D4
D4 C3 B2 A1
A1 B2 C3 D4 */



#include<stdio.h>
void main(){
        int row;
        printf("Enter the value ROW:");
        scanf("%d",&row);
        for(int i=row;i>=1;i--){
                char ch1='A'+row-1;
                char ch2='A';
                int x=row-row+1;

                for(int j=row;j>=1;j--){
                        if(i%2==0){
                        printf("%c%d ",ch2,x);
                        ch2++;
                        x++;
                        }
                        else{
                                printf("%c%d ",ch1,j);
                                ch1--;
                        }
                }
                printf("\n");
        }
}


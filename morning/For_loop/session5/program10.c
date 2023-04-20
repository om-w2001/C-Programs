/*10.Take no rows from the user ROWS=4
  
     1
     4 9
     64 125 216
     2401 4096 6561 10000
     */
#include<stdio.h>
void main(){
	int x;
	printf("Enter the rows:");
	scanf("%d",&x);
	int num=1;
	for(int i=1;i<=x;i++){
		for(int j=4;j>=i;j--){
			printf("  ");
		}
			for(int z=1;z<=i;z++){
		   if(i==1){	
			printf("%d ",num);
			num++;
		}
		 if(i==2){
                        printf("%d ",num*num);
                        num++;
                }
		 if(i==3){
                        printf("%d ",num*num*num);
                        num++;
                }
		 if(i==4){
                        printf("%d ",num*num*num*num);
                        num++;
                }



		}
		printf("\n");
	}
		
}

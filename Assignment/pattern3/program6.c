/* 6. take no of rows from the user
= = = = = =
$ $ $ $ $ $
@ @ @ @ @ @
= = = = = =
$ $ $ $ $ $
@ @ @ @ @ @ */



#include<stdio.h>
void main(){
	int x;
	printf("Enter the row");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		for( int j=1;j<=x;j++){
	if(i<=3){  
		         if(i==1){	
			printf("= ");
			 }
			 if(i==2){
				 printf("$ ");
			 }
			 if(i==3){
				 printf("@ ");
			 }
		}

	if(i>3){
                         if(i==4){
                        printf("= ");
                         }
                         if(i==5){
                                 printf("$ ");
                         }
                         if(i==6){
                                 printf("@ ");
                         }

		}
		
	          	} 	
		printf("\n");
	}
	}



#include<stdio.h>
void main(){
	int x,y;
	int num=1;
	char ch='a';
	printf("Enter the ROWS:");
	scanf("%d",&x);
	printf("Enter the col:");
	scanf("%d",&y);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			if(i<3){
				if(i=1){
					printf("%d ",num);
					num++;
				}
				if(i=2){
					printf("%c ",ch);
					ch++;
				}
				else{
					printf("# ");
				}
			}
			else {
				if(i=4){
					printf("%d ",num);
					num++;
				}
				if(i=5){
					printf("%c ",ch);
					ch++;
				}
				else {
					printf("# ");
						}
						}
						printf("\n");
						}
						}
}


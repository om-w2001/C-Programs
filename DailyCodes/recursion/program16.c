// countstep without recursion
/*#include<stdio.h>
int countstep(int n){
	int count=0;
	while(n){
		if(n%2==0){
			n=n/2;
			n=n-1;
			count++;
		}
	}
	return count*2;
}
void main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int count=countstep(x);
	printf("number of step is %d\n",count);
}
*/

#include<stdio.h>
int countstep(int n,int count){
	if(n==0){
		return count;
	}
	if(n%2==0){
		n=n/2;
		count++;
	}
	else{
		n=n-1;
		count++;
	}
	return countstep(n,count);
}
void main(){
        int x;
	int count1=0;
        printf("Enter the number:");
        scanf("%d",&x);
        int count=countstep(x,count1);
        printf("number of step is %d\n",count);
}


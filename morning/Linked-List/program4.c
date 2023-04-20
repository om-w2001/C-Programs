/* find the middle node from linked list */

#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	int data;
	struct employee *next;
}emp;

emp *head=NULL;

emp* createNode(){
	getchar();
	emp *newnode=(emp*)malloc(sizeof(emp));
	printf("Enter the data:");
	scanf("%d",&newnode->data);

	newnode->next=NULL;
	return newnode;
}
emp* addNode(){
	emp *newnode=createNode();

	if(head==NULL){
		head=newnode;
	}else{
		emp *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return newnode;
}
int countnode(){
	int count=0;
	emp*temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
int midnode(){ //   emp*   used when we return temp
	int count=countnode();
	int cnt;
	cnt=count/2;
	cnt=cnt+1;
	emp*temp=head;
	while(cnt){
		temp=temp->next;
		cnt--;
	}
	return temp->data;  // return temp;
}
void main(){
	int x;
	printf("Enter the node:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		addNode();
	}
	int data=midnode();
	printf("%d ",data);
}

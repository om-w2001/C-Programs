/* Reverse the data in singly linked list with two temp */


#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	int data;
	struct employee *next;
}emp;

emp *head=NULL;

emp* createNode(){
	emp *newnode=(emp*)malloc(sizeof(emp));
	printf("enter the data:");
	scanf("%d",&newnode->data);

	newnode->next=NULL;
	return newnode;
}
emp* addnode(){
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
int nodeCount(){
	emp *temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
void reverseSLL(){
	int count=nodeCount();
	if(head==NULL){
		printf("Wrong Input:");
	}
	else{
		emp*temp1=head;
		emp*temp2=head;
		int ch=count/2;
		for(int i=1;i<=ch;i++){	
			int val=count-i;
			while(val){
				temp2=temp2->next;
				val--;
			}
			int y=temp1->data;
			 temp1->data=temp2->data;
                                temp2->data=y;
				temp2=head;
			temp1=temp1->next;
	}
}
}
void printLL(){
	if(head==NULL){
		printf("Wrong Input");
	}else{
	emp *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
		printf("\n");
	}
	}

}
void main(){
	int node;
	printf("Enter the node:");
	scanf("%d",&node);
	for(int i=1;i<=node;i++){
		addnode();
	}
	printLL();
	printf("\n");
	reverseSLL();
	printLL();
}

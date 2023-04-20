/* using Dounly Linked List reverse using temp without change in data
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	struct node *prev;
	int data;
	struct node *next;
}node;
node *head=NULL;
node*createnode(){
	node*newnode=(node*)malloc(sizeof(node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);

	newnode->prev=NULL;
	newnode->next=NULL;

	return newnode;
}
void addnode(){
	node*newnode=createnode();
	if(head==NULL){
		head=newnode;
	}
	else{
		node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
}
void print(){
	node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void reverseDLL(){
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->prev;
	}
}
void main(){
	int node;
	printf("Enter the number of node:");
	scanf("%d",&node);
	for(int i=1;i<=node;i++){
		addnode();
	}
	print();
	printf("\n");
	reverseDLL();
}


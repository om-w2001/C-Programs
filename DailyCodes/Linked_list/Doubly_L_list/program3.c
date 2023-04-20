/* Interchange the data with using two temp
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
int countnode(){
	if(head==NULL){
		printf("Not a single linked list present");
	}
	else{
	node*temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
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
	if(head==NULL){
		printf("Empty Linked List:");
	}
	else{
	int count=countnode();
	node*temp1=head;
	node*temp2=head;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	int ch=count/2;
	while(ch){
		int x=temp2->data;
		temp2->data=temp1->data;
		temp1->data=x;

		temp1=temp1->next;
		temp2=temp2->prev;
		ch--;
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
	print();
	printf("\n");
	reverseDLL();
	print();
}	

/* WAP to concat the two linked list with singly list and head1 and head2 using return
                                            concat()=copy all node
					    concatNLN=copy 'N' last node*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *head1=NULL;
node *head2=NULL;

node*createnode(){
	node *newnode=(node*)malloc(sizeof(node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}


node* addnode(node *head){
	node*newnode=createnode();
	if(head==NULL){
		head=newnode;
	}
	else{
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return head;
}
void printLL(node*head){
	if(head==NULL){
		printf("Wrong Input\n");
	}else{
	node*temp=head;
	while(temp->next!=NULL){
		printf("|%d|->",temp->data);
		temp=temp->next;
	}
	printf("|%d|\n",temp->data);
	}
}
int concat(){
	if(head1==NULL){
		printf(" create first node:");
		return -1;
	}else{
		if(head2==NULL){
			return 0;
		}
		else{
	node*temp=head1;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=head2;
		return 0;
		}
	}
}
int countnode(node*head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}

int concatNLN(int pos){
	if(head1==NULL){
		printf("create first node");
	}
	else{
		if(head2==NULL){
			return 0;
		}
		else{
			node*temp=head1;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			int count=countnode(head2);
			node*temp2=head2;
			int val=count-pos;
			while(val){
				temp2=temp2->next;
				val--;
			}
			temp->next=temp2;
		}
	}
}
void main(){
	int Nnode;
	printf("Enter the number of node in  linked list 1:");
	scanf("%d",&Nnode);
	for(int i=1;i<=Nnode;i++){
		head1=addnode(head1);
	}
	printf("Enter the number of node in linked list 2:");
	scanf("%d",&Nnode);
	for(int i=1;i<=Nnode;i++){
		head2=addnode(head2);
	}
	printLL(head1);
	printLL(head2);
	//concat();
	//printLL(head1);
	int pos;
	printf("Enter the position:");
	scanf("%d",&pos);
	concatNLN(pos);
	printLL(head1);
}


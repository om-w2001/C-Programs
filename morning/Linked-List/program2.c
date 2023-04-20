#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	struct employee *prev;
	int data;
	struct employee *next;
}emp;

emp *head=NULL;

emp* createNode(){
	emp *newnode=(emp*)malloc(sizeof(emp));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	
	  newnode->prev=NULL;
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
		newnode->prev=temp;
	}
	return newnode;
}

int printLL(){
	if(head==NULL){
		printf("Not a single node present\n");
		return -1;
	}else{
	emp *temp=head;
	while(temp!=NULL){
		printf("data:%d\n",temp->data);
		temp=temp->next;
	
	}
	printf("\n");

}
}
int inplace(){
	if(head==NULL){
		printf("first create node:\n");
		return -1;
	}else{
		if(head->prev==head->next){
		}
		else{
	emp*temp=NULL;

	head->prev=head->next;
	head->next=NULL;
	head=head->prev;
	while(head->prev!=NULL){
		temp=head->prev;
		head->prev=head->next;
		head->next=temp;
		if(head->prev==NULL){
			break;
		}else{
			head=head->prev;
		}
	}
		}
		return 0;
	}
}
void main(){
	int x;
	printf("Enter the node:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		addNode();
	}
	printLL();
	 
	inplace();

	printLL();

}


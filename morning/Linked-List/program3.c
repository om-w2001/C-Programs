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
	printf("enter the data:");
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
int nodeCount(){
	emp *temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	
	return count;
}
void inplace(){
            if(head==NULL){
		printf("first create node:");
	}else{
		if(head->next==NULL){
		}
		else{
	int count=nodeCount();
	int val=count-2;
	emp*temp=head;
	emp*temp2=head;
	head=head->next;
	temp2=head;
	temp->next=NULL;
	temp2=temp2->next;
	head->next=temp;
	while(val){
		temp=head;
		head=temp2;
		temp2=temp2->next;
		head->next=temp;
		val--;
	}
		}
	}
		
}
void printLL(){
	if(head==NULL){
		printf("Wrong Input");
	}else{
	emp *temp=head;
	while(temp!=NULL){
		printf("data:%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");
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

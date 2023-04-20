#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	int data;
	struct employee *next;
}emp;

emp *head=NULL;
emp*rear=NULL;
int flag=0;
emp* createNode(){
	getchar();
	emp *newnode=(emp*)malloc(sizeof(emp));
	printf("enter the data:\n");
	scanf("%d",&newnode->data);

	newnode->next=NULL;
	return newnode;
}
int enqueue(){
	emp *newnode=createNode();

	if(head==NULL){
		head=newnode;
		rear=newnode;
	}else{
		rear->next=newnode;
		rear=newnode;
		if(newnode==NULL){
			printf("memory is full:");
		}
	}
}
int dequeue(){
	if(head==NULL){
		flag=0;
	}else{
		if(head->next=NULL){
			int x=head->data;
			free(head);
			head=NULL;
			return x;
		}else{

	emp*temp=head;
	head=head->next;
	int x=temp->data;
	free(temp);
	return x;
		}
	}
}
int printLL(){
	emp*temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void main(){
	char choice;
	do{
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.printLL\n");
		int ch;
		printf("Enter the choice:");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				int ret=enqueue();
				if(ret==-1){
					printf("stack is full\n");
				}

				break;
			case 2:{
				       int ret;
				ret=dequeue();
				if(flag==0){
					printf("Stack is empty");
				}else{
					printf("%d is popped",ret);
				}
			       }
				break;
			case 3:{
				       int ret;
				ret=printLL();
				if(flag==0){
					printf("stack is empty");
				}else{
				printf("%d\n",ret);
				}
			       }
				break;

			default:
				printf("wrong Input");
		}
		getchar();
		printf("Do you want to continue:");
		scanf("%c",&choice);
	}while(choice=='y'||choice=='Y');
}


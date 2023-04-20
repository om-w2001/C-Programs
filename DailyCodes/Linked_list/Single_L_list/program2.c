/* Head is not globle and return the head */

#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int id;
	float ht;
	struct student *next;
}stud;
stud *addNode(stud *head){
	stud *newnode=(stud*)malloc(sizeof(stud));
	newnode->id=1;
	newnode->ht=5.5;
	newnode->next=NULL;

	head=newnode;
	return head;
}
void printll(stud *head){
	stud* temp=head;
	while(temp!=NULL){
		printf("%d ",temp->id);
		printf("%f ",temp->ht);
		temp=temp->next;
	}
}

void main(){
	stud *head=NULL;
      head=addNode(head);
      printll(head);
}




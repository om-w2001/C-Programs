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
}int nodeCount(){
	emp *temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
int reverseSLL(){
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
int pali(){
	 emp*temp1=head;
           emp*temp2=head;
                int ch=count/2;
		int val=ch+1;
		while(val){
			temp1=temp1->next;
			val--;
		}
		int val2=count-i;
                        while(val2){
                                temp2=temp2->next;
                                val2--;
                        }

                        int y=temp1->data;
                         temp1->data=temp2->data;
                                temp2->data=y;
                                temp2=head;
                        temp1=temp1->next;
		}
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

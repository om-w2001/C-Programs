/* WAP to find middle node from linked list using two pointer  */

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
	printf("enter the data\n");
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
int midnode(){// when even no (node=6)then middle node is 4
	emp*fastptr=head;
	emp*slowptr=head;
	while(fastptr!=NULL&&fastptr->next!=NULL){
		fastptr=fastptr->next->next;
		slowptr=slowptr->next;
	}
	return slowptr->data;
}
int midnode2(){// when even no (node=6)then middle node is 3
        emp*fastptr=head->next;
        emp*slowptr=head;
        while(fastptr!=NULL&&fastptr->next!=NULL){
                fastptr=fastptr->next->next;
                slowptr=slowptr->next;
        }
        return slowptr->data;
}
void main(){
	int x;
	printf("Enter the node:");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		addNode();
	}
	int y=midnode();
	printf("middle node is:%d\n",y);
	int z=midnode2();
        printf("middle node is:%d\n",z);

}


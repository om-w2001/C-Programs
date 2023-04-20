/* Whole code with 7 function 1.addNode();
                              2.printLL();
			      3.addFirst();
			      4.addatpos();
			      5.addLast();
			      6.count();
			      7.delectfirst();
			      8.delLast();
			      9.delAtpos();
			      */



#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	char name[20];
	int id;
	float sal;
	struct employee *next;
}emp;

emp *head=NULL;

emp* createNode(){
	getchar();
	emp *newnode=(emp*)malloc(sizeof(emp));
	printf("Enter a name of employee:\n");
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*newnode).name[i]=ch;
		i++;
	}
	printf("enter a employee id no:\n");
	scanf("%d",&newnode->id);
	getchar();
	printf("enter a salary of employee:\n");
	scanf("%f",&newnode->sal);

	newnode->next=NULL;
	return newnode;
}
emp* addNode(){
	emp *newnode=createNode();

	if(head==NULL){
		head=newnode;
		newnode->next=head;
	}else{
		emp *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
	}
	return newnode;
}
void addFirst(){
	emp *newnode=createNode();

	if(head==NULL){
		head=newnode;
	}else{
		emp*temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		 temp->next=newnode;
		newnode->next=head;
		head=newnode;
	}
}
int nodeCount(){
	emp *temp=head;
	int count=0;
	while(temp->next!=head){
		count++;
		temp=temp->next;
	}
	count++;
	return count;
}

int addatpos(int pos){
	int count=nodeCount();
	
	if(pos<=0 || pos>=count+2){
		printf("invalid node position:\n");
		return -1;
	}else{
		if(pos==count+1){
			addNode();
		}else if(pos==1){
			addFirst();
		}else{
			emp *newnode=createNode();
			emp *temp=head;

			while(pos-2){
				temp=temp->next;
				pos--;
			}
			newnode->next=temp->next;
			temp->next=newnode;
			return 0;
		}
	}
}

void addLast(){
	emp *newnode=addNode();
}
void delFirst(){
	emp*temp1=head;
	while(temp1->next!=head){
		temp1=temp1->next;
	}
	emp *temp=head;
	temp1->next=temp->next;
	head=temp->next;
	free(temp);
}
int delLast(){
	if(head==NULL){
		printf("Zero node present\n");
		return -1;
	
	}
	else{
	 if(head->next==head){
		free(head);
		head=NULL;
	}
	else{
		emp*temp=head;
		while(temp->next->next!=head){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=head;
	}
	return 0;
                         
}
}
int delAtpos(int pos1){
	int count=nodeCount();
	if(pos1<=0 || pos1>count){
                printf("Invalid pos:");
	}
	else{
		if(pos1==count){
			delLast();
		}
		if(pos1==1){
			delFirst();
		}
		else{
			emp *temp=head;
			emp*temp1=head;
			while(pos1-2){
				temp=temp->next;
				temp1=temp1->next;
				pos1--;
			}
			temp1=temp1->next;
			temp->next=temp->next->next;
			free(temp1->next);
		}
		return 0;
	}
}


void printLL(){
	if(head==NULL){
		printf("Wrong Input");
	}else{
	emp *temp=head;
	while(temp->next!=head){
		printf("empName:%s\n",temp->name);
		printf("empId:%d\n",temp->id);
		printf("empsal:%f\n",temp->sal);
		temp=temp->next;
		printf("\n");
	}
	printf("empName:%s\n",temp->name);
                printf("empId:%d\n",temp->id);
                printf("empsal:%f\n",temp->sal);
	
	}

}

void main(){

	char choice;

	do{
		printf("1:addNode\n");
		printf("2:addFirst\n");
		printf("3:addlast\n");
		printf("4:nodeCount\n");
		printf("5:addatpos\n");
		printf("6:delatfirst\n");
		printf("7:printLL\n");
		printf("8:delLast\n");
		printf("9:delAtpos\n");
		int ch;
		printf("\nEnter choice:");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:{
				int x;
				printf("Enter the number of node:");
				scanf("%d",&x);
				for(int i=1;i<=x;i++){
				addNode();
				}
			       }
				break;
		        case 2:
				addFirst();
				break;

			case 3:	
				addLast();
				break;
			case 4:
				int count=nodeCount();
				printf("count of nodes is:%d\n",count);
				break;
			case 5:{
				int pos;
				printf("Enter a number\n");
				scanf("%d",&pos);
				addatpos(pos);
			       } 
			       break;
                        
			case 6:
			         delFirst();
			         break;
			case 7:
			         printLL();
			         break;

			case 8:
				 delLast();
				 break;
			case 9:{
				 int pos1;
				 printf("Enter the number node to delect:");
				 scanf("%d",&pos1);
				 delAtpos(pos1);
			       }
				 break;

			default:
				 printf("Wrong choice:\n");

		}
		getchar();
		printf("\nDo you want to continue then enter y/Y:");
		scanf("%c",&choice);
	}
	while(choice=='y'||choice=='Y');
	
}



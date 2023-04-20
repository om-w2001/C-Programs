// linked the all node to head  and take input from user 

#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char mName[20];
	float imdb;
	struct movie *next;
}mov;
mov *head=NULL;
void addnode(){
	mov *newnode=(mov*)malloc(sizeof(mov));
        printf("Enter the movie name\n");
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		(*newnode).mName[i]=ch;
		i++;
	}
        printf("Enter the rating\n");
	scanf("%f",&newnode->imdb);
	getchar();

	newnode->next=NULL;

	if(head==NULL){
		head=newnode;
	}
	else{
		mov *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void printll(){
	mov*temp=head;
	while(temp!=NULL){
		printf("%s=",temp->mName);
		printf("%f ",temp->imdb);
		temp=temp->next;
	}
}
void main(){
	addnode();
	addnode();
	addnode();
	printll();
}


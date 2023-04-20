#include<stdio.h>
int size=0;
int front=-1;
int rear=-1;
int flag=0;
int enqueue(int arr[]){
	if(rear==size-1){
		return-1;
	}else if(front==-1){
		front++;
	}
	rear++;
	printf("Enter the data");
	scanf("%d",&arr[rear]);
	return 0;
}
int dequeue(int arr[]){
	if(rear==-1){
		flag=0;
		return -1;
	}else{
		flag=1;
		int val=arr[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}else{
			front++;
		}
		return val;
	}
}
int frontt(int arr[]){
	if(front==-1){
		flag=0;
		return -1;
	}else{
		int val=arr[front];
		flag=1;
		return val;
	}
}
int pqueue(int arr[]){
	if(front==-1){
		flag=0;
		return -1;
	}else{
		for(int i=front;i<=rear;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}
void main(){
	printf("Enter the size of stack:");
	scanf("%d",&size);
	int arr[size];
	char choice;
	do{
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.frontt\n");
		printf("4.pqueue\n");		
		int ch;
		printf("Enter the choice:");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				int ret=enqueue(arr);
				if(ret==-1){
					printf("stack is full\n");
				}

				break;
			case 2:{
				       int ret;
				ret=dequeue(arr);
				if(flag==0){
					printf("Stack is empty");
				}else{
					printf("%d is popped",ret);
				}
			       }
				break;
			case 3:{
				       int ret;
				ret=frontt(arr);
				if(flag==0){
					printf("stack is empty");
				}else{
				printf("%d\n",ret);
				}
			       }
				break;
			case 4:
				{
                                       int ret;
                                ret=frontt(arr);
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

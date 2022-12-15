#include<stdio.h>
#include<stdlib.h>

struct queue{
int data;
struct queue *next;
};

struct queue *head=0,*newnode,*temp,*front=NULL,*rear=NULL;
int size=5;

void enqueue();
void dequeue();
void display();

void main()
{
	int choice;
	
	do{
	
		printf("Enter the operations to be performed in queue: \n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n");
		scanf("%d",&choice);
		
			switch(choice)
			{
				case 1:
					enqueue();
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				case 4:
					break;
				default:
					printf("Enter a valid choice \n");
			}
	}
	
	while(choice!=4);

}


void enqueue()
{

		newnode=(struct queue*)	malloc(sizeof(struct queue));	
		if (newnode=NULL)
		printf("Queue overflow");

		printf("Enter the data to be inserted \n");
		scanf("%d",&newnode->data);
		newnode->next=0;

		if (rear==NULL){
		front=rear=newnode;
		head=front;
		}
		else
		{
			rear->next=newnode;
			rear=newnode;		
		}

		
		
	
}


void dequeue()
{
	temp=head;
	if(front==NULL)
	{
		printf("The queue is empty \n");
	}

	else
	{
		printf("The deleted data is :%d \n", front->data);
		head=temp->next;
		free(temp);
		front=head;
	}	
	
	
}

void display()
{
	temp=head;
	if(front==NULL)
	{
		printf("Queue is empty \n");
	}
	
else
{
 	printf("The queue data are: \n");
	while (temp!=0)
	{
		printf("%d \n", temp->data);
		temp=temp->next;
		
	}
}

}



















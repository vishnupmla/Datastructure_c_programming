#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

struct node *head=0,*newnode,*temp,*prev;
void push();
void pop();
void display();

void main()
{
int choice;

do
{
	
	
	printf("Enter the operation you want to perform \n 1.Push \n 2.Pop \n 3.display \n 4.Exit \n");

	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Exit");
			break;
		default:
			printf("Enter a valid choice");
			
	}
}
while(choice!=4);

}

void push()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data \n");
	scanf("%d",&newnode->data);
	temp=head;
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}

	else
	{
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		temp=newnode;
	}

}


void pop()
{
	temp=head;

	if(head==0)
	{
		printf("stack underflow");

	}
	else
	{
		while(temp->next!=0)
		{
			prev=temp;
			temp=temp->next;
		}
		
		printf("Popped data is - %d \n",temp->data);
		free(temp);
		prev->next=0;
	}

}

void display()
{
	temp=head;
	if(head==0)
	{
		printf("stack underflow");
	}
	else
	{
		printf("Stack data is \n");
		while(temp!=0)
		{
			printf("%d \n",temp->data);
			temp=temp->next;
		}
	
	}

}

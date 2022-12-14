#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next,*prev;
};
struct node *head=0, *newnode, *temp, *ptr,*tst;
int count;

void insertBeg();
void insertLast();
void insertPosition();
void display();
void deleteBeg();
void deleteLast();
void deletePosition();

void main()
{
	int ch;

	do
	{
	printf("enter the choice\n \n 2.Display\n 3.Insert Begining \n 4.Insert last \n 5.Insert at a postion \n 6.Delete from 	 Begining \n 7.Delete from Last \n 8.Delete at a position  \n 10.Exit \n ");
	scanf("%d", &ch);
		switch(ch)
		{
			
			case 2:
				display();
				break;
			case 3:
				insertBeg();
				break;
			case 4:
				insertLast();
				break;
			case 5:
				insertPosition();
				break;
			case 6:
				deleteBeg();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				deletePosition();
				break;
			
			case 10:
				break;
			default:
				printf("Enter valid choice");
		}
	}
	while(ch!=10);


}

void insertBeg()
{

	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter the new first node data \n");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	if (head==0)
	{
		head=temp=newnode;
		
	}
	else
	{
		head->prev=newnode;
	
		newnode->next=head;
		head=newnode;
	}
	
}


void insertLast()
{
	temp=head;
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter the new last node data \n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	
	temp->next=newnode;
	newnode->prev=temp;
	temp=newnode;
}


void insertPosition()
{
	int pos,i=0;
	temp=head;
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter the postion to which new data is to be inserted \n");
	scanf("%d",&pos);
	printf("Enter the new pos node data \n");
	scanf("%d",&newnode->data);

	if(pos>count)
	{
		printf("The position not exist \n");
	}
	else
	{
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
	}
	
	newnode->prev=temp;
	ptr=temp->next;
	newnode->next=ptr;
	ptr->prev=newnode;
	temp->next=newnode;
	
}


void deleteBeg()
{
	temp=head;
	ptr=temp->next;
	head=ptr;
	ptr->prev=0;
	printf("Deleted item is %d \n",temp->data);
	free(temp);
	
}

void deleteLast()
{
	temp=head;
	
	while(temp->next!=0)
	{
		ptr=temp;
		temp=temp->next;
	}
	
	ptr->next=0;
	printf("Last item %d \n",temp->data);
	free(temp);
}


void deletePosition()
{
	int key;
	printf("\n Enter the value to be deleted :\n");
	scanf("%d",&key);
	temp=head;
	while(temp->data!=key)
	{
		ptr=temp;
		temp=temp->next;
		if (temp==NULL)
		break;
		
	}
	if(temp==NULL)
	{
		printf("The value doesnot exist \n");
	}
	if(temp->data==key)
	{
		if(temp==head)
		{
			printf("%d deleted data \n", temp->data);
			ptr=temp->next;
			head=ptr;
			ptr->prev=0;
			free(temp);
		}
		else
		{
		printf("%d deleted data \n", temp->data);
		ptr->next=temp->next;
		tst=temp->next;
		tst->prev=ptr;
		free(temp);
		}
	}
}


void display()
{
	temp=head;
	
	if(head==0)
	{
		printf("The list is empty");
	}
	else
	{	printf("The elements are:\n");
		while(temp!=0)
		{
			printf("%d \n",temp->data);
			temp=temp->next;
			count++;
		}
	}
}




























#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
struct node *head=0, *newnode, *temp,*prev;
int count;

void create()
{
int choice=1;	
while(choice!=0)
{
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
		
	}
	printf("Whether you want to add a new node press:1 to continue or press:0 to exit");
	scanf("%d",&choice);
}
}

void insertBeg()
{
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter the new first node data");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	
}

void insertLast()
{
	temp=head;
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter the new last node data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	
	temp->next=newnode;
}

void insertPosition()
{
	int pos,i=0;
	temp=head;
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter the postion to which new data is to be inserted");
	scanf("%d",&pos);
	printf("Enter the new pos node data");
	scanf("%d",&newnode->data);

	if(pos>count)
	{
		printf("The position not exist");
	}
	else
	{
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
	}
	
	newnode->next=temp->next;
	temp->next=newnode;
}

void deleteBeg()
{
	temp=head;
	head=temp->next;
	printf("Deleted item is %d",temp->data);
	free(temp);
	
}

void deleteLast()
{
	temp=head;
	
	while(temp->next!=0)
	{
		prev=temp;
		temp=temp->next;
	}
	
	prev->next=0;
	printf("Last item %d",temp->data);
	free(temp);
}

void deletePosition()
{
	int key;
	printf("\n enter the value to be deleted :\n");
	scanf("%d",&key);
	temp=head;
	while(temp->data!=key)
	{
		prev=temp;
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
			head=temp->next;
		}
		else
		{
		printf("%d deleted data \n", temp->data);
		prev->next=temp->next;
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

void search()
{
	int key,i=1;
	printf("enter the element to be searched:\n");
	scanf("%d",&key);
	temp=head;
	while(temp->data!=key)
	{
		temp=temp->next;
		i++;
		if (temp==NULL)
		break;
	}
	if (temp->data==key)
	{
		printf("The item is available at location %d \n",i);
	}

}


void main()
{
	int ch;
	

	do
	{
	printf("enter the choice\n 1.creation\n 2.Display\n 3.Insert Begining \n 4.Insert last \n 5.Insert at a postion \n 6.Delete from Begining \n 7.Delete from Last \n 8.Delete position \n 9.Search \n 10.Exit \n ");
	scanf("%d", &ch);
	
		switch(ch)
		{
			case 1:
				create();
				break;
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
			case 9:
				search();
				break;
			case 10:
				printf("Exit");
				break;
			default:
				printf("Enter valid choice");
		}
	}
	while(ch!=6);
}



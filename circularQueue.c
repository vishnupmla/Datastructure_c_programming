#include<stdio.h>

int arr[100], front=-1, rear=-1, data,size;

void enqueue();
void dequeue();
void display();

void main()
{
int choice;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	
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
	if ((front==rear+1) || (front==0 && rear==size-1))
	{
		printf("Queue is full \n");
	}
	
	else
	{
		if(front==-1)
		front=0;
		
		rear=(rear+1)%size;
		printf("Enter the data \n");
		scanf("%d",&data);
		arr[rear]=data;	
	}
	
}

void dequeue()
{
	if (front==-1)
	{
		printf("Queue is empty \n");
	}
	
	else
	{
		printf("Deleted item is : %d \n", arr[front]);
		if( front == rear)
		front=rear=-1;
		
		else
		{
			front=(front+1)%size;
		}
	}
}

void display()
{
	int i;
	if (front==-1){
	printf("Queue is empty \n");
	}
	
	else
	{
		printf("Queue elements are: \n");
		for(i=front;i<=rear;i=(i+1)%size)
		{
			printf("%d \n",arr[i]);
		}
	}
}















































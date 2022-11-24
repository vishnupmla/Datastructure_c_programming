#include<stdio.h>

int stack[100], top=-1,n,choice,x,i;

void push();
void pop();
void display();

int main()
{
	
	printf("enter the size of stack");
	scanf("%d",&n);
	

	do{

	printf("Enter the operation to be performed\n 1.Push \n 2.Pop\n 3.Display \n 4.Exit \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		{
			push();
			break;
		}
	
		case 2:
		{
			pop();
			break;
		}

		case 3:
		{
			display();
			break;
		}

		case 4:
		{
			printf("Exit");
			break;
		}
		default:
		printf("Enter a valid choice");
	}


	}

	while(choice!=4);
	return 0;

}


void push()
{
	if(top>=n-1)
	{
	printf("Stack overflow");
	
	}
	else
	{
	printf("Enter the value");
	scanf("%d",&x);
	
	top++;
	stack[top]=x;
	}
	
}

void pop()
{
	if(top<=-1)
	{
	printf("Stack underflow");
	}
	else
	{
	printf("The popped element is - %d ",stack[top]);
	top--;
	}
}

void display()
{
	printf("Stack elements are:\n"); 
	if(top>-1)
	{
	for(i=top;i>-1;i--)
	printf("%d \n",stack[i]);
	}
	else
	{
	printf("Stack is empty");
	}
}

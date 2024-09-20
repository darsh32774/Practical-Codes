#include<stdio.h>
#define Max 10

int top=-1, Stack[Max]={0};

int isEmpty();
int isFull();
void push();
void pop();
void peek();
void display();

int main()
{
	int choice = 0;
	
	while(choice!=7)
	{
	    printf("\n\n1.Push\n2.Pop\n3.Peek\n4.Check if Full\n5.Check if empty\n6.Display\n7.Exit");
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
    			peek();
    			break;
    		}
    		
    		case 4:
    		{
    			if(isFull())
        			printf("Stack is full.");
    			else
        			printf("Stack is not full.");
        		break;
	    	}
		
    		case 5:
    	    {
    			if(isEmpty())
            		printf("Stack is empty.");
    			else
            		printf("Stack is not empty.");
    			break;
    	    }
	    
        	case 6:
        	{
        		display();
        		break;
        	}
		
    		case 7:
    			return 0;
    		
    		default: 
    		{
    		    printf("Invalid input.");
    			break;
    		}
    	}
	}
	return 0;
}

void push()
{
	int n,i;
	if(isFull())
	{
		printf("Stack is full.");
		return;
	}
	there:
	printf("Enter number of elements to be pushed: ");
	scanf("%d",&n);
	if((n>10-top)||n==11)
	{
	printf("Number exceeds limit of stack.\n\n");
	goto there;
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter element: ");
		scanf("%d",&Stack[++top]);
	}
	display();
}

void pop()
{
	int n,i;
	if(isEmpty())
	{
		printf("Stack is empty.");
		return;
	}
	where:
	printf("Enter number of elements to be popped: ");
	scanf("%d",&n);
	if(n-1>top)
	{
	printf("Number exceeds size of stack.\n\n");
	goto where;
	}
	for(i=0;i<n;i++)
	{	
		printf("Popped element: %d\n",Stack[top]);
		top--;
	}
	display();
}

void peek()
{
	if(isEmpty())
	{
		printf("The stack is empty.");
		return;
	}
	printf("The top element is: %d",Stack[top]);
}

int isFull()
{
	if(top==9)
	return 1;
	else 
	return 0;
}

int isEmpty()
{
	if(top==-1)
	return 1;
	else 
	return 0;
}

void display()
{
	int i;
	
	if(isEmpty())
	{
	printf("Stack is empty.");
	return;
	}
     printf("\nSTACK:\n");
	//printf("\n");
	for(i=top;i>=0;i--)
	printf("element %d:\t%d\n",i+1,Stack[i]);
}

#include<stdio.h>
#include<string.h>
#define Max 50
int top=-1;
char exp[Max]={0}, postf[Max]={0}, Stack[Max]={0};
int isGreater(char,char);
int isEmpty();
int isFull();
void push(char,char[]);
void pop();
void peek();
void display();

int main()
{	
	printf("Enter the epression: ");
	scanf("%s",&exp);
	
	for(i=0;exp[i]!='\0';i++)
	{
		if(isalnum(exp[i])
			push(exp[i],postf)
		else
		{
			if((exp[i]=='(')||(exp[i]=='[')||(exp[i]=='{'))
				push(exp[i],Stack);
			else if((exp[i]=='+')||(exp[i]=='-')||(exp[i]=='*')||(exp[i]=='/')||)
				
			else if((exp[i]==')')||(exp[i]==']')||(exp[i]=='}'))
				{
					
				}
		}
	}
}

void push(char inp,char inArr[])
{
	inArr[++top]=inp;
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
	if(n>top)
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
	//printf("\n");
	for(i=top;i>=0;i--)
	printf("%d\n",Stack[i]);
}


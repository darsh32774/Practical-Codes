#include<stdio.h>
int isFull();
int isEmpty();
void Insert();
void Delete();
void pop(int);
void Display();
void Front();
int arr[50] = {0},n;
int top = -1;
int main()
{
	int choice;
	
	printf("Enter size of queue: ");
	scanf("%d",&n);
	
	while(choice!=5)
	{
		printf("\n1. Insert\n2. Delete\n3. Display\n4. Front\n5. Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{ 
				Insert();
				break;
			}
			case 2:
			{
				Delete();
				break;
			}
			case 3:
			{
				Display();
				break;
			}
			case 4:
			{
				Front();
				break;
			}
			case 5:
				break;
			default: 
				printf("Invalid input.");
		}
	}
	
	return 0;
}

int isFull()
{
	if(top == n-1)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}

void Insert()
{
	int num, i;
	
	if(isFull())
	{
		printf("Queue is full.");
		return;
	}
	
	here:
	printf("Enter number of elements to be inserted: ");
	scanf("%d",&num);
	
	if(num>=n-top)
	{
		printf("Queue cannot accept %d elements.\n\n",num);
		goto here;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			printf("element %d: ",i+1);
			scanf("%d",&arr[++top]);
		}
	}
	
	Display();
}

void Delete()
{
	int num, i;
	
	if(isEmpty())
	{
		printf("Queue is empty.");
		return;
	}
	
	there:
	printf("\nEnter number of elements to be deleted: ");
	scanf("%d",&num);
	
	if(num>top+1)
	{
		printf("Queue does not have %d elements to delete.",num);
		goto there;
	}
	else
	{	
		for(i=0;i<num;i++)
		{
			pop(num);
		}
	}
	Display();
}

void Display()
{
	int i;
	printf("\nQUEUE: ");
	for(i=0;i<=top;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void pop(int num)
{
	int i;
	for(i=0;i<n;i++)
	{
		//printf("Deleted element %d: %d\n",i+1,arr[i]);	
		arr[i] = arr[i+1];
	}
	top--;
}

void  Front()
{
	if(isEmpty())
	{
		printf("Queue is empty.");
		return;
	}
	printf("The element at front: %d",arr[0]);
}

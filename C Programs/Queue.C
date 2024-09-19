#include<stdio.h>

void EnQ();
void DeQ();
int isFull();
int isEmpty();
void Display();
void Front();

int Arr[10] = {0};
int front = 0, rear = -1;

int main()
{
     int choice;
	 //clrscr();

	 while(choice!=5)
	 {
		  printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Front\n5. Exit");
		  scanf("%d",&choice);

		  switch(choice)
		  {
			   case 1:
			   {
					EnQ();
					break;
			   }
			   case 2:
			   {
					DeQ();
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
			   {
					printf("Invalid input.");
					break;
			   }
		  }
	 }
	 //getch();
	 return 0;
}

int isFull()
{
	 if(rear>=9)
		  return 1;
	 else
          return 0;
}

int isEmpty()
{
     if(rear<0)
          return 1;
     else
          return 0;
}

void EnQ()
{
     int el;
     int n,i;

     if(isFull())
     {
          printf("\nQueue is full.\n\n");
          return;
     }
     else
     {
          here:
          printf("\nEnter number of elements to enqueue: ");
          scanf("%d",&n);
          
          if(n>(10-(rear+1)))
          {
              printf("Max size exceeded.\n");
              goto here;
          }
          
          for(i=1;i<=n;i++)
          {
               printf("Enter element %d: ",i);
               scanf("%d",&el);
               Arr[++rear] = el;
          }

          Display();    
     }
}

void DeQ()
{
     int n,i,j;

     if(isEmpty())
     {
          printf("\nQueue is empty.\n\n");
          return;
     }
     else
     {
          there:
          printf("\nEnter number of elements to dequeue: ");
          scanf("%d",&n);
          
          if(n>rear+1)
          {
              printf("Queue does not have %d elements.\n",n);
              goto there;
          }
          
          for(i=1;i<=n;i++)
          {
               for(j=0;j<=rear;j++)
               {
                  Arr[j] = Arr[j+1];
               }
          }
          
          rear-=n;

          Display();
     }
}

void Display()
{
     int i;
     
     if(isEmpty())
     {
         printf("\nQueue is empty.\n\n");
         return;
     }
     
     printf("\nQueue: ");

     for(i=0;i<=rear;i++)
     {
          printf("%d ",Arr[i]);
     }
     printf("\n\n");
}

void Front()
{
     if(isEmpty())
     {
         printf("\nQueue is empty.\n\n");
         return;
     }
    
     printf("\nElement at front: %d\n\n",Arr[0]);
}

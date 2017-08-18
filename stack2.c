//IMPLIMENTATION OF LINEAR QUEUE
#include<stdio.h>
#include<stdlib.h>
#define max 20
int queue[max],front=-1,rear=-1;

int isEmpty()
{
	return (rear==-1&&front==-1);	
}

int isFull()
{
	return (rear==(max-1));
}
//INSERTING THE ELEMENT
void insertq(int d)
{
	if (isFull())
	{
		printf("\nQUEUE IS FULL->->\n");
	return;
	}
	else 
	{
		queue[++rear]=d;
		if(front==-1)
		front++;
		printf("YOUR ELEMENT INSERTED SUCCESSFULLY");
	}
}
//DELETING THE ELEMENT
void deleteq()
{
	int d;
	if (isEmpty())
	{
		printf("\nQUEUE IS EMPTY->->\n");
		return;
	}
	else
	{ 	
	 d=queue[front];
	if (front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
	}
	printf("\nYOUR ELEMENT %d DELETE SUCCESSFULLY\n",d);
}
//DISPLYING THE ELEMENT OF LINEAR QUEUE
void display()
{
	int i;
	for(i=front;i<rear;i++)
	{
	 printf("%d\n",queue[i]);
	}
	printf("%d\n",queue[i]);
}

int main()
{
	int ch,e;
	do
	{
		printf("\t\t\t\nMENU\n 1.DISPLAY 2.INSERT 3.DELETE 4.EXIT");
		printf("ENTER YOUR CHOICE::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				display();
				break;
			case 2:
				printf("\nENTER THE ELEMENT YOU WANT TO INSERT::");
				scanf("%d",&e);
				insertq(e);
				break;
			case 3:
				deleteq();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nINVALID CHOICE\n");				
		}
	}while(1);
	return 0;
}

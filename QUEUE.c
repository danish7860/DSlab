#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull()
{
	return(rear==MAX_SIZE-1);
}

int isEmpty()
{
	return(rear==-1 && front==-1);
}

int peek()
{
	return queue[front];
}
void insertQueue(int d)
{
if(queue(isfull))
{
printf("queue is full hence element cannot be inserted");
return;
}
else
rear++;
queue[++rear]=d;
if(front==-1)
front++;
printf("element is inserted");
}
void deletequeue()
{
if(queue(isempty))
{
	printf("queue is empty");
	return;
}
d=queue[front]
if(front==rear)
{
	front && rear==-1;
}
else
front++;
printf("deleted element is d");
}
int main()
{
	int i,choice;
	for(i=front;i<=rear;i++)
	{
		//display menu 1.peek 2.insert e 3.delete 4.exit
		printf("enter your choice");
		//take input in choice variable
		switch(choice)
		{
			case 1:
				//call display function
				break;
			case 2:
				//call push function
				break;
			case 3:
				//call pop function
				break;
			case 4:
				//call exit(0) function or return 0
				break;
			default:
				//invalid choice				
		}
	}

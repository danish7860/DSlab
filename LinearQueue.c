
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int Queue[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	return (rear == MAX_SIZE-1);
	return 1;
	return 0;
}

int isEmpty(){
//returns 1 if QUEUE is empty else returns -1
  return front == -1 && rear == -1;
}

void display(){
	printf("The Element of the Queue are :\n");
	int i;
	for(i=front;i<=rear;i++)
		printf("\n %d",Queue[i]);
}

void insert(int d)
{
	if(!isFull())
	{
		if(isEmpty())
		front++;
		rear++;
		Queue[rear]=d;
		printf("Element is succesfully Inserted");
	}
	else
			printf("Enter Element Is Not Inserted, The Queue IS Full");
}

void delete(){
	if(!isEmpty()){
		int d;
			d = Queue[front];	
		if(front==rear)
			front=rear=-1;
		else
			front++;
		printf("The Element Deleted is %d",d);
	}else
		printf("THE QUEUE IS Empty\n");			

}
int main(){
	int choice,e;
	do
	{
		//display menu 1.peek 2.push 3.pop 4.exit
		printf("\n Enter\n 1.Display\n 2.Insert\n 3.Delete\n 4.exit");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		//take input in choice variable
		switch(choice){
			case 1: 
					display();
				break;
			case 2: printf("Enter the element to be Inserted : \n");
					scanf("%d",&e);
					insert(e);
					break;
			case 3:
				delete();
				break;
			default:
				printf("Invalid Choice");	
				break;
		}
	}while(1);
	return 0;
}

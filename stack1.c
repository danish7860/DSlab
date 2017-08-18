//ARRAY IMPLIMENTATION OF STACK
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct stack
{
	int data[MAX];
	int top;
};
//INITIALIZING TO STACK
int initialize(struct stack *s)
{
	s->top=-1;
}
//CHEKING STACK IS EMPTY OR NOT
int isEmpty(struct stack *s)
{	
	if(s->top==-1)
		return 1;
	else
		return 0;
}
//CHEKING STACK IS FULL OR NOT
int isFull(struct stack *s)
{
	if(s->top==MAX-1)
		return 0;
	else
		return 1;
}
//FUNTION FOR PEAK ELEMENT
void peek(struct stack *s)
{
	if(isEmpty(s))
		printf("\nThe Stack Is Empty.\n");
	else 
		printf("\nThe Element is %d\n",s->data[s->top]);
}
//FUNCTION FOR PUSHING ELEMENT 
int push(struct stack *s,int d)
{
	int i;
	i=isFull(s);
	if(i==0)
	{
	  return 1;
	 
	}
	else
	{
		s->data[++s->top]=d;
	  return 0;
	}
}
//FUNCTION FOR POPING ELEMENT
void pop(struct stack *s)
{
	if(isEmpty(s))
	{
		printf("\nThe Stack is UnderFlow\n");
	}
	else
	{
		printf("\nThe Poped Elementis %d\n",s->data[s->top--]);
	}
}

int main()
{
	struct stack s;
	int ch,e,i;
	initialize(&s);
	do
	{
		//display menu 1.peek 2.push 3.pop 4.exit
		printf("\n\t\t\tMENU\n1.peek.\n2.push.\n3.pop.\n4.exit");
		printf("\nENTER THE CHOICE\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				peek(&s);
				break;
			case 2:
			    printf("\nEnter Data to be Push::");
			    scanf("%d",&e);
			    i=push(&s,e);
				if(i==1)
					printf("\nStack is Overflow\n");
				else
					printf("\nThe Element %d is Pushed successfully\n",e);
				break;
			case 3:
				pop(&s);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\ninvalid choice\n");				
		}
	}while(1);
	return 0;
}

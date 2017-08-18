//EVALUATION OF POSTFIX EXPRESSION
#include<stdio.h>
#include<ctype.h> 

typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(stack*,char);

char pop(stack*);

int evaluation(char pos[]);

int operation (int n1,int n2,char opr);

int main()
{
	char postfix[30];
	printf("\nENTER POST EXPRESSION\n");
	scanf("%s",postfix);
	printf("\n\n EVALUATION OF POSTFIX EXPRESSION\n %d",evaluation(postfix));
	return 0;
}
//operator priority
int operation (int n1,int n2,char opr)
{	
	switch(opr)
	{
	case '+':
	return n1+n2;
	case '-':
	return n1-n2;
	case '*':
	return n1*n2;
	case '/':
	return n1/n2;
}

}
//evaluating operands 
int evaluation(char pos[])
{
	stack s;
	int n1,n2,result,i=0;
	s.top=-1;

	while (pos[i]!='\0')
	{
		if (isdigit(pos[i]))
		{
			push(&s,pos[i]-'0');
		}
		else
		{
			n1=pop(&s);
			
			n2=pop(&s);
			result=operation(n1,n2,pos[i]);
			push(&s,result);
		}
		i++;
	}
	return pop(&s);
}
//pushing after operation
void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}

//CHEKING CONTINUITY OF DIFFERRENT TYPES OF PARENTHESIS USING STACK
#include<stdio.h>
#include<ctype.h> 
#define MAX 200

typedef struct conversion
{
	char a[MAX];
	int top;
}stack;

void push(stack*,char);

char pop(stack*);

int ismp(char left,char right);

void cb(char exp[]);

int main()
{
	char exp[30];
	printf("\nENTER EXPRESSION CONTAING PARANTHESIS\n");
	scanf("%s",	exp);
	cb(exp);
	return 0;
}
//cheching for matching pair
int ismp(char left,char right)
{
	switch(left)
	{
		case '(':
			if(right==')')
				return 1;
			else
				return 0;
		case '{':
			if(right=='}')
				return 1;
			else
				return 0;
		case '[':
			if(right==']')
				return 1;
			else
				return 0;
		default:
				return 0;			
	}

}
//cheching balence of parentheses
void cb(char exp[])
{
	stack s;
	int i,c;
	s.top=-1;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push(&s,exp[i]);
		else
		{
			if(s.top==-1)
			{
				printf("\nInvalid Expression");
				return;
			}
			c=pop(&s);
			if(ismp(c,exp[i]))
				continue;
			else
			{
				printf("\nInvalid Expression");
				return;
			}	
		}	
	}
	if(s.top==-1)
		printf("\nExpression is valid");
	else
		printf("\nInvalid Expression");	
}

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

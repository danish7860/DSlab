#include<stdio.h>
#include<ctype.h> //for isalpha() function
typedef struct conversion
{
char a[30];
int top;
}stack;
void push(stack*,char);
char pop(stack*);
int main()
{
char postfix[30];
printf("\nENTER POSTFIX EXPRESSION\n");
scanf("&s",postfix);
printf("\n\nEVALUATION OF POSTFIX EXPRESSION=\n%d",evaluation(postfix));
return 0;
}
int ismatchingpairs(char left,char right)
switch (left)
{
case'(':
if (right==')')
return 1;
else
return 0;
}
}
int ismatchingpair (char left,char right)
{
switch(left)
{
case'{':
if (right=='}')
return 1;
else
return 0;
}
}
int ismatchingpair (char left,char right)
{
switch(left)
{
case'[':
if (right==']')
return 1;
else
return 0;
}
}
void checkbalanced (char exp[])
int i;
stack c;
s.top=-1;
for(i=0;exp[i]!='\0';i++)
{
if(exp[i]
int evaluation (char pos[])
{
int i,n1,n2,res;
stack s1;
int i=0;
s1.top=-1;
for(i=0;pos[i]!='\0';i++)
{
if(isdigit(post[i]))
{
push(&s1,pos[i]-'\0');
}
else
{
n1=pop(&s1);
n2=pop(&s1);
res=operation(n1,n2,pos[i]);
push(&s1,res);
}
}
return pop(&s1);
}
void push(stack *s)
{
if (s->top==-1)
{
printf("stack is empty\n");
return0;
}
else
{
char data=s->a[s->top--];
return data;
}
}

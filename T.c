#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 20

struct stack
{
int top;
char arr[MAX];
};

void push(struct stack *,char);
char pop(struct stack *);
int isdigit(char);
void prefix_to_postfix(char instr[],char outstr[]);

void main()
{
char str[MAX],resstr[MAX],temp[MAX];
int i,z;
clrscr();
printf(“\nEnter a prefix string”);
gets(str);
for(i=0;str[i]!=’\0';i++);
for(i=i-1,z=0;i>=0;z++,i–)
temp[z]=str[i];
temp[z]=’\0';
printf(“\nPrefix string: %s”,str);
prefix_to_postfix(temp,resstr);
printf(“\nPostfix string: %s”,resstr);
getch();
}

void push(struct stack *s,char ch)
{
if(s->top==MAX-1)
{printf(“Stack Overflow”);
exit(1);
}
s->arr[++(s->top)]=ch;
}

char pop(struct stack *s)
{
if(s->top==-1)
{printf(“Stack Underflow”);
exit(1);
}
return(s->arr[(s->top)–]);
}

int isdigit(char ch)
{return(ch>='0' && ch<='9');
}

void prefix_to_postfix(char instr[],char outstr[])
{
int i,j,ct=1,z=0;
char ch,opnd1,opnd2;
struct stack stk;
stk.top=-1;
for(i=0;instr[i]!='\0';i++)
{
ch=instr[i];
if(isdigit(ch))
{push(&stk,ch);
}
else
{
if(ct==1)
{opnd1=pop(&stk);
opnd2=pop(&stk);
outstr[z++]=opnd1;
outstr[z++]=opnd2;
outstr[z++]=ch;
ct++;
}
else
{
opnd2=pop(&stk);
outstr[z++]=opnd2;
outstr[z++]=ch;
}
}
}
outstr[z]='\0';
}

#include<stdio.h>
#include<stdlib.h>
struct stack
{
int data[20];
int top;
}
stack;
void push(int ch)
{
if(stack.top==(19))
{
printf("stack full\n");
}
else
{
stack.top++;
stack.data[stack.top]=ch;
}
}
int pop()
{
int k;
if(stack.top==-1)
{
printf("stack empty\n");
exit(1);
}
else
{
k=stack.data[stack.top--];
return(k);
}
}
int pr(int ch)
{
switch(ch)
{
case'^':return(3);
case'/':return(2);
case'*':return(2);
case'+':return(1);
case'-':return(1);
default:return(0);
}
}
void main()
{
char infix[20],postfix[20],ch;
int i=0,j=0;
stack.top=-1;
printf("enter infix expression");
scanf("%s",infix);
while(infix[i]!='\0')
{
ch=infix[i];
if(ch=='(')
{
push(ch);
}
else if((ch>='a'&&ch<='z')||(ch>='1'&&ch<='9'))
{
postfix[j]=ch;
j++;
}
else if(ch==')')
{
while(stack.data[stack.top]!='(')
{
postfix[j]=pop();
j++;
}
stack.top--;
}
else
{
while(stack.top!=-1&&(stack.data[stack.top]>=pr))
{
postfix[j]=pop();
j++;
}
push(ch);
}
i++;
}
while(stack.top!=-1)
{
postfix[j]=pop();
j++;
}
postfix[j]='\0';
printf("postfix is %s",postfix);
getchar();
}

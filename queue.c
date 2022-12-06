#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queuearray[MAX];
int rear=-1;
int front=-1;
int main()
{
int choice;
while(1)
{
printf("1.Insert element to queue\n");
printf("2.Delete element from queue\n");
printf("3.Display all the element of queue\n");
printf("4.Quit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("wrong choice\n");
}
}
}
void insert()
{
int additem;
if(rear==MAX-1)
printf("Queue Overflow\n");
else
{
if(front==-1)
front=0;
printf("Insert the element in queue:");
scanf("%d",&additem);
rear=rear+1;
queuearray[rear]=additem;
}
}
void delete()
{
if(front==-1||front>rear)
{
printf("Queue Underflow\n");
return;
}
else
{
printf("Element deleted from queue is:%d\n",queuearray[front]);
front=front+1;
}
}
void display()
{
{
int i;
if(front==-1)
printf("Queue is empty\n");
else
{
printf("Queue is:\n");
for(i=front;i<=rear;i++)
printf("%d\t",queuearray[i]);
printf("\n");
}
}
}

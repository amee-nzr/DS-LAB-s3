#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int queue[100];
int f=-1,r=-1;
int item,n;
void main()
{
int choice;
printf("enter the queue size\n");
scanf("%d",&n);

while(1)
{
printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
printf("enter the choice\n");

scanf("%d",&choice);


switch(choice)
{
case 1:{
enqueue();
break;
}
case 2:{
dequeue();
break;
}
case 3:{
display();
break;
}
case 4:{
exit(1);
break;
}
default:
printf("wrong choice");
}
}
}

void enqueue()
{
printf("enter the value to insert\n");
scanf("%d",&item);
if(f==-1&&r==-1)
{
f=0,r=(r+1)%n;
queue[r]=item;
}

else if(f==(r+1)%n)
printf("queue overflow\n");

else
{
r=(r+1)%n;
queue[r]=item;
}
}

void dequeue()
{
if(f==-1 && r==-1)
printf("UNDERFLOW\n");
else if(r==f)
{
item=queue[f];
f=-1,r=-1;
printf("removed element is %d\n",item);
}
else
{
item=queue[f];
f=(f+1)%n;
printf("removed elementis %d\n",item);
}
}

void display()
   {
        int i;
        if (f == - 1)
            printf("Queue is empty \n");
        else
        {
            printf("Queue is :\n");
            for (i = f; i <= r; i++)
               { printf("%d ", queue[i]);
            printf("\n");
        }
    }
    }
   
























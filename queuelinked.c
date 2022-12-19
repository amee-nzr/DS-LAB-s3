#include<stdio.h>
#include<stdlib.h>
struct node
{  
  int data;
  struct node *link;
}*front=NULL,*rear=NULL,*temp=NULL;
void add()
{  
  
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the data");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(front==NULL)
  { 
    front=temp;
    rear=temp;
  }
  else
  { 
   rear->link=temp;
   rear=temp;
  }
}
void delete()
{ 
  if(front==NULL)
  { 
    printf("the queue is empty");
  }
  else
  { 
   front=front->link;
  }
}
void display()
{ 
  if(front==NULL)
  { 
    printf("the linked list is empty");
  }
  else
  {
    struct node *temp;
    temp=front;
    while(temp!=NULL)
    { 
      printf("%d",temp->data);
      temp=temp->link;
    }
    printf("NULL");
   }
}
int main()
{ 
  int choice;
  while(1)
  {
    printf("\n1:push\n2:pop\n3:display\n4:exit\n");  
    printf("enter the choice ");
    scanf("%d",&choice);
    switch(choice)
    { 
    
      case 1:
      add();
      break;
      case 2:
      delete();
      break;
      case 3:
      display();
      break;
   }
  }
}       
      
      
  
    
      
          
    

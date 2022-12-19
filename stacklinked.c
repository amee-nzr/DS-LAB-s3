#include<stdio.h>
#include<stdlib.h>
int k=0;
struct node
{ 
  int data;
  struct node *link;
}*head=NULL,*temp=NULL;

void push()
{  
   struct node *temp;
   int item;
  
   printf("enter the item");
   scanf("%d",&item);
   temp=(struct node*)malloc(sizeof(struct node));
   if(head==NULL)
   { 
     head=temp;
     head->data=item;
     head->link=NULL;
     i++;
     
   }
   else
   { 
     temp->data=item;
     temp->link=head;
     head=temp;
     i++;
   }
   
}
  

void pop()
{ 
   
   if(head==NULL)
   { 
     printf("the stack is empty");
   }
   else
   { 
     head=head->link;
   }    
}
void display()
{ 
  if(head==NULL)
  { 
    printf("the linked list is empty");
  }
  else
  {
    struct node *temp;
    temp=head;
    while(temp->link!=NULL)
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
      push();
      break;
      case 2:
      pop();
      break;
      case 3:
      display();
      break;
   }
  }
}       
      
      
  
    
      

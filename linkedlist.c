#include<stdio.h>
#include<stdlib.h>
struct node
{ 
  int data;
  struct node *link;
}*head;
void newnode(int n)
{ 
  int d;
  struct node *temp,*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL)
  
  { 
    printf("Enter the data of the node 1 :");
    scanf("%d",&d);
    head=newnode;
    head->data=d;
    head->link=NULL;
    temp=newnode;
    int i=2;
    for(i=2;i<=n;i++)
    {  
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("Enter the data of the node :  %d",i);
      scanf("%d",&d);
      newnode->data=d;
      newnode->link=NULL;
      temp->link=newnode;
      temp=newnode;
    }
  }
}   
void insertfront()
{  
  int item;
  printf("Enter the element :");
  scanf("%d",&item);
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=item;
  temp->link=head;
  head=temp;
}
void insertback()
{
  int item1;
  printf("Enter the item :");
  scanf("%d",&item1);
  struct node *temp1;
  temp1=(struct node*)malloc(sizeof(struct node));
  struct node*ptr;
  ptr=head;
  while(ptr->link!=NULL)
  { 
    ptr=ptr->link;
  }
  ptr->link=temp1;
  temp1->data=item1;
  temp1->link=NULL;
 }
 void insertany()
 {  
    int item2,a;
    printf("Enter the value of the item after which the node has to be inserted :");
    scanf("%d",&a);
    printf("Enter the item that has to be inserted :");
    scanf("%d",&item2);
    struct node *ptr;
    ptr=head;
    struct node *temp2;
    temp2=(struct node*)malloc(sizeof(struct node));
    while(ptr->link!=NULL&&ptr->data!=a)
    { 
      ptr=ptr->link;
    }
    if(ptr->data==a)
    {  
      temp2->link=ptr->link;
      temp2->data=item2;
      ptr->link=temp2;
    }
    else
    { 
      printf("The element is not found.");
      exit(0);
    }  
}
void display()
{ 
  if(head==NULL)
  { 
    printf("The linked list is empty.");
  }
  else
  { 
    struct node*ptr;
    ptr=head;
    while(ptr->link!=NULL)
    { 
      printf("\t%d\t",ptr->data);
      ptr=ptr->link;
    }
    printf("\t%d\t",ptr->data);
  }
}
void deletefront()
{  
 head=head->link;
}
void deletelast()
{  
  struct node *prev,*curr;
  curr=head;
  prev=head;
  while(curr->link!=NULL)
  { 
    prev=curr;
    curr=curr->link;
    
  }
  prev->link=NULL;
}
void deleteany()
{  
   
  int item;
  struct node *prev,*curr;
  curr=head;
  prev=head;
  printf("Enter the data that is to be deleted :");
  scanf("%d",&item);
  while(curr->link!=NULL&&curr->data!=item)
  {  
    prev=curr;
    curr=curr->link;
  }
  if(curr->data==item)
  {  
    prev->link=curr->link;
  }
  else
  { 
    printf("Element not found.");
  }
}      
int main()
{  int n;
   printf("Enter the size of the linked list :");
   scanf("%d",&n);
   newnode(n);
   display();      
   while(1)
   { 
     int choice;
     printf("\n1:insert front\n2:inser back\n3:insert at any postion\n4:display\n5:delete front\n6:delete last\n7:delete any\n8:exit\n");
     printf("enter the choice");
     scanf("%d",&choice);
     switch(choice)
     {   
       case 1:
       insertfront();
       break;
       case 2:
        insertback();
       break;
       case 3:
        insertany();
       break;
       case 4:
        display();
       break;
       case 5:
       deletefront();
       break;
       case 6:
       deletelast();
       break;
       case 7:
       deleteany();
       break;
       case 8:
       exit(0);
       break;
     }
   }
}              
        
        

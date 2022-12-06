#include<stdio.h>
#include<stdlib.h>
int a[100],f=-1,r=-1,l,i;
int insert();
int delete();
int display();
void main()
	{
 		printf("enter the length of queue ");
 		scanf("%d",&l);
 		while(1)
 	{
  		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
  		scanf("%d",&i);
  		switch(i)
  	{
    case 1:
    {
     insert();
     break;
    }
    case 2:
    {
     delete();
     break;
    }
    case 3:
    {
     display();
     break;
    }
    case 4:
    {
     exit(0);
    }
    default:
    printf("enter a  value ");
 	}
 	}
 	}   
 int insert()
	 {
  		if((r+1)%l==f)
  		printf("\nQUEUE OVERFLOW\n");
 		 else
  	{
  		 if(f==-1)
   		f=0;r=(++r)%l;
  		 printf("enter a value ");
   		scanf("%d",&a[r]);
  	}
	 }
 int delete()
	 {
   		if(f==-1)
  		 printf("\nQUEUE UNDERFLOW\n");
 		  else if(f==r)
   	{
   	 	printf("delete value is :- %d\n",a[f]);
    		f=-1;
    		r=-1;
   	}
   		else
   	{
    		printf("deleted value is  %d\n",a[f]);
    		f=(++f)%l;
   	}
 	}  
 int display()
 	{
    	{
    		if(f==-1)
    		printf("\nQUEUE EMPTY\n");
    		else 
    	{
      		printf("queue is :- ");
      		for(int k=0,i=f;k<=(l-f+r)%l;i=(++i)%l,++k)
     		 printf("%d\t",a[i]);
      	}
      	}
     		printf("\n");
    	}
    	
    	

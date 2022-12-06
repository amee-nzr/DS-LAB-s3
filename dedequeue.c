#include<stdio.h>
#include<stdlib.h>
int a[100],i,n,f=-1,r=-1;
int enqueue();
int dequeue();
int inject();
int deject();
int show();
int main()
{	
	printf("enter the size of Queue");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Inject\n4.Deject\n5.Show\n6.Exit\nEnter your choice");
		loop:
		scanf("%d",&i);
		switch(i)
		{
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:inject();
				break;
			case 4:deject();
				break;
			case 5:show();
				break;
			case 6:exit(0);
			default:printf("Enter a valid number");
			goto loop;
		}
	}
	return 0;
}
int enqueue()
{
	if((r+1)%n==f)
	{
		printf("\n!!OVERFLOW!!\n");
	}
	else
	{
		if(f==-1)
		{
			f=0;
		}
		r=(++r)%n;
		printf("Enter a value :");
		scanf("%d",&a[r]);
	}
}
int dequeue()
{
	if(f==-1)
	printf("\n!!UNDERFLOW!!\n");
	else if (f==r)
	{
		printf("Dequeue value :%d",a[f]);
		f=-1;
		r=-1;
	}
	else
	{
		printf("dequeue value :%d",a[f]);
		f=(++f)%n;
	}
}
int inject()
{
	if((r+1)%n==f)
	printf("\n!!OVERFLOW!!\n");
	else if(f==-1)
	{
		f=n-1;
		r=n-1;
	}
	else if(f==0)
	f=n-1;
	else
	--f;
	printf("enter value");
	scanf("%d",&a[f]);
}
int deject()
{
	if(f==-1)
	printf("\n!!UNDERFLOW!!\n");
	else if(f==r)
	{
		printf("Dejectvalue:%d",a[r]);
		f=-1;
		r=-1;
	}
	else if(r==0)
	{
		printf("dejectvalue:%d",a[r]);
		r=n-1;
	}
	else
	{
		printf("dejectvalue:%d",a[r]);
		--r;
	}
}
int show()
{
	if(f==-1)
	printf("EMPTY");
	else
	{
		for(int k=0,i=f;k<=(n-f+r)%n;i=(++i)%n,++k)
		{
			printf("%d",a[i]);
			printf("\n");
		}
	}
}



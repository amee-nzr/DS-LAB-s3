#include <stdio.h>
#include<stdlib.h>
int a[100], n, i, f = -1, r = -1;
int enque();
int deque();
int inject();
int deject();
int show();
int main()
{
    printf("Enter The Limit Of The Queue: ");
    scanf("%d",&n);
    while(1)
    {
        printf("\n1.Enque   2.Deque   3.Inject   4.Eject   5.Show   6.Exit \nEnter The Process: ");
        loop:
        scanf("%d",&i);
        switch (i)
        {
        case 1:enque();
            break;
        case 2:deque();
            break;
        case 3:inject();
            break;
        case 4:deject();
            break;
        case 5:show();
            break;
        case 6:exit(0);
        default:printf("Enter A Valid Value: ");
                goto loop;
        }
    }
    return 0;
}
int inject()
{
    if((r+1)%n==f)
    printf("\n!! QUEUE OVERFLOW !!\n");
    else
    {
        if(f==-1)
        {
            f=n-1;
            r=n-1;
        }
        else if(f==0)
        f=n-1;
        else
        --f;
        printf("Enter A Value : ");
        scanf("%d",&a[f]);
    }
}
int deque()
{
    if(f==-1)
    printf("\n!! QUEUE UNDERFLOW !!\n");
    else if(f==r)
    {
        printf("Deque Value : %d\n",a[f]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("Deque Value : %d\n",a[f]);
        f=(++f)%n;
    }
}
int show()
{
    if(f==-1)
    printf("\n!! OOPS....QUEUE EMPTY !!\n");
    else
    {
        printf("\nYour Queue: ");
        for(int k=0,i=f;k<=(n-f+r)%n;i=(++i)%n,++k)
        printf("  %d",a[i]);
        printf("\n");
    }
}

int enque()
{
    
    if((r+1)%n==f)
    printf("\n!! QUEUE OVERFLOW !!\n");
    else
    {
        if(f==-1)
        f=0;
        r=(++r)%n;
        printf("Enter A Value : ");
        scanf("%d",&a[r]);
    }
}
int deject()
{
    if(f==-1)
    printf("\n!! QUEUE UNDERFLOW !!\n");
    else if(f==r)
    {
        printf("\neject Value : %d\n",a[r]);
        f=-1;
        r=-1;
    }
    else if(r==0)
    {
        printf("\neject Value : %d\n",a[r]);
        r=n-1;
    }
    else
    {
        printf("\neject Value : %d\n",a[r]);
        --r;
    }
}  

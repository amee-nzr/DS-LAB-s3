#include<stdio.h>
int partition();
void quick();
int n,x;
int a[50];
int low,high,mid;
int i,j;
void main()
{
printf("enter the size\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("array is\n");
  for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
} 
low=0;
high=n-1;
quick(low,high);
printf("\n sorted array is\n");
  for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
} 
}
   void quick(low,high)
{

if(low<high)
{
mid=partition(low,high);
quick(low,mid-1);
quick(mid+1,high);
}

}

int partition(int low,int high)
{
i=low;
j=high;
x=a[low];
while(i<=j)
{
    while((a[i]<=x)&&(i<n))
        i++;
    while((a[j]>x)&&(j>=0))
        j--;
if(i<j)
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else
{
int temp=a[j];
a[j]=a[low];
a[low]=temp;
}
}
return j;
}
        


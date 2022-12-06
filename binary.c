#include <stdio.h>
void main()
{
int a[50],i,j,n,temp,item;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be found\n");
scanf("%d",&item);
   for(i=0;i<n;i++)
   {
   for(j=0;j<n-i-1;j++)
   {
   if(a[j]<a[j+i])
   {
   temp=a[j+1];
   a[j+1]=a[j];
   a[j]=temp;
   }
   }
   }
int beg=0,end=n-1,mid=(beg+end)/2;
while(beg<=end&&a[mid]!=item)
{
if(item<a[mid])
end=mid-1;
else
beg=mid+1;
mid=(beg+end)/2;
}
if(a[mid]==item)
printf("item found %d",mid);
else
printf("item not found");
}

 

#include<stdio.h>
void main()
{
  int n,a[20],i,index,key;
  printf("enter the size of array:\n");
  scanf("%d",&n);
  printf("enter the elements:"); 
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("enter the elements to search:");
   scanf("%d",&key);
   index=-1;
   for(i=0;i<n;i++)
    {
      if(a[i]==key)
       {
         index=i;
         break;
       }
    }
        if(index==-1)
        {
         printf("no search element found:");
        }
        else
        {
         printf("ssearch element found at index %d",index);
        }
} 

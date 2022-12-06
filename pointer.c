#include <stdio.h>
void main()
{
int a[10],*p,i,sum=0;
printf("enter the elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
p=&a[0];
for(i=0;i<10;i++)
{
sum=sum+*(p+i);
}
printf("sum is %d",sum);
}

#include<stdio.h>
void mergeSort(int,int);
void merge(int,int,int);
int a[50],b[50];
int n;
int i,j,k;

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
int low=0;
int high=n-1;
mergeSort(low,high);
printf("\nsorted array is\n");
  for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
} 
}

void mergeSort(int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergeSort(low,mid);
mergeSort(mid+1,high);
merge(low,mid,high);
}
}

void merge(int low,int mid,int high)
{
i=low;
j=mid+1;
k=low;
while((i<=mid)&&(j<=high))
{
if(a[i]<=a[j])
{
b[k]=a[i];
i++;
k++;
}
else
{
b[k]=a[j];
j++;
k++;
}
}
while(i<=mid)
b[k++]=a[i++];
while(j<=high)
b[k++]=a[j++];
for(i=low;i<=high;i++)
a[i]=b[i];
}


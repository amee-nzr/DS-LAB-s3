#include<stdio.h>
void main()
{
int r1,c1,r2,c2,i,j,k;
printf("enter the order of first matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter the order of second matrix\n");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],s[r1][c1],c[100][100];

printf("enter the elements of first matrix\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of second matrix\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}

if(r1==r2&&c1==c2)
{
printf("sum of the matrix is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
s[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",s[i][j]);
}
printf("\n");
}
}
else
{
printf("addition not possible\n");
}

if(c1==r2)
{
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<r1;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
else
printf("Multiplication is not possible");
if(c1==r2)
{
printf("The product of matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
}
}





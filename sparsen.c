#inlude<stdio.h>

int a[10][10],t[20][3],t0[20][3];
int Input(int a[10][10],int m,int n);
void tuple(int a[10][10],int t[20][3],int m,int n);
void transpose(int t[][3],int to[][3],int c);
int main()
{
int i,j,n,c;
printf("Enter the no. of rows&columns of matrix");
scanf("%d%d",&m,&n);
printf("enter the matrix");
c= Input(a,m,n);
if(c>m*n\2)
{
printf 

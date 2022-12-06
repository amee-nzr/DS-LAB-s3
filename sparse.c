#include<stdio.h>
int a[100][100];
int max;
int b[100][3],b2[100][100],c[100][100];
int row,col;
int i,j,k,n,m;
int val;
void read();
void displaysparse();
void sparse();
void displaytuple();
void transpose();
void printtranspose();
int main()
{
    printf("Enter the rows & columns of Matrix A:\n");
    scanf("%d\n%d",&row,&col);
    
    read();
    displaysparse();
    sparse();
    displaytuple();
    transpose();
    printtranspose();
    return 0;
    
}
void read()
{
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the element a[%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void displaysparse()
{
    printf("\n\nSparse Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d \t",a[i][j]);
            if(j==col-1)
        {
            printf("\n");
        }
        }
    }
}
void sparse()
{
    k=1;
    b[0][0]=row;
    b[0][1]=col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
        b[0][2]=k-1;
    }
}
void displaytuple()
{
    col = b[0][2];
    printf("\nTuple form of sparse matrix: \n");
    printf("row\tcol\tvalue\n");
    for(i=0;i<=col;i++)
    {
        printf("%d \t %d \t  %d \n",b[i][0],b[i][1],b[i][2]);
    }
}
void transpose()
{
    b2[0][0]=b[0][1];
    b2[0][1]=b[0][0];
    b2[0][2]=b[0][2];
    k = 1;
    n=b[0][2];
    m=b[0][1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==b[j][1])
            {
                b2[k][0]=i;
                b2[k][1]=b[j][0];
                b2[k][2]=b[j][2];
                k++;
            }
        }
    }
}
void printtranspose()
{
    col = b2[0][2];
    printf("\nTuple form of transpose sparse matrix: \n");
    printf("row\tcol\tvalue\n");
    for(i=0;i<=col;i++)
    {
        printf("%d \t %d \t  %d \n",b2[i][0],b2[i][1],b2[i][2]);
    }
    
    row = b2[0][0];
    col = b2[0][1];
    val = b2[0][2];
    
    printf("\n\nTranspose of Sparse Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=0;
            for(k=0;k<=val;k++)
            {
                c[b2[k][0]][b2[k][1]]=b2[k][2];
            }
            printf("%d \t",c[i][j]);
            if(j==col-1)
        {
            printf("\n");
        }
        }
    }
}

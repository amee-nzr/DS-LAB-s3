#include<stdio.h>
void main()
{
struct employee
{
int id;
char name[100];
float salary;
}emp[100];
int n,i;
printf("enter the no. of employees\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter employee id\n");
scanf("%d",&emp[i].id);
printf("enter employee name\n");
scanf("%s",emp[i].name);
printf("enter employee salary\n");
scanf("%f",&emp[i].salary);
}
printf("details of the employees are:\n");
for(i=0;i<n;i++)
{
printf("ID:\t%d\n",emp[i].id);

printf("NAME:\t%s\n",emp[i].name);

printf("SALARY:\t%f\n",emp[i].salary);
printf("\n");
}
}

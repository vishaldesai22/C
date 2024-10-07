#include<stdio.h>
#include<conio.h>
void main()
{
int n1=0,n2=1,n3=0,i,no;
clrscr();
printf("enter a number for series\n");
scanf("%d",&no);
printf("\n %d %d ",n1,n2);
for(i=2;i<no;i++)
{
n3=n1+n2;
printf("%d ",n3);
n1=n2;
n2=n3;
} getch();
 }                     //fibonacci series in C
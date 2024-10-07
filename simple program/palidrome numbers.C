#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0,temp;
clrscr();
printf("enter number \n");
scanf("%d",&n);

temp = n;
while(n>0)
{
r=n%10;
s=(s*10)+r;
n=n/10;


}
if(temp==s)
{ printf("number is palidrome ");
}
else
{printf("not palidrome");
}

getch();
}
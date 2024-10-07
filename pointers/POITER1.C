#include<stdio.h>

#include<conio.h>
void main ()
{int *p,*q,*r,a,b;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
p=&a;
q=&b;
*r=*p+*q;
printf("result is ::%d",*r);

getch();
}
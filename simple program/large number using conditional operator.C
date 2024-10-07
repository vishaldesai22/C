#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter a and b");
scanf("%d,%d",&a,&b);
(a>b)?printf("A is largegst:=%d",a):printf("B is largest:=%d",b);
getch();
}